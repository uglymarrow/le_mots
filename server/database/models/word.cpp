#include "word.h"

Word::Word()
{
    con = Connection_db::get_instance();
    con->connect("tcp://127.0.0.1:3306", "ks", "123");
}

Word::~Word()
{
    con->close();
}

bool Word::check_word(const std::string& word, const std::string& category)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }

    sql::Statement *stmt; 
    sql::ResultSet *res;

    try{
        stmt = con->get_connection()->createStatement();
        res = stmt->executeQuery("SELECT * FROM words WHERE (word = '" + word + "' and category = '" + category + "')");
        if ((res->next())){
            return true;
        } else 
        {
            return false;
        }
    } catch (sql::SQLException &e){
        return false;
    }
}

bool Word::add_word(const std::string& word, const std::string& category)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }
    
    sql::Statement *stmt; 
    sql::ResultSet *res;
    sql::PreparedStatement *pstmt;

    //проверка на существование слова

    if (check_word(word, category))
    {
        return false;
    }

     //определение последнего id

    stmt = con->get_connection()->createStatement();
    res = stmt->executeQuery("SELECT * FROM words ORDER BY ID DESC LIMIT 1");
    res->next();
    int current_id = res->getInt(1);
    //добавление слова в базу данных 
    pstmt = con->get_connection()->prepareStatement("insert into words(id, word, category) values (?, ?, ?)");
    pstmt->setInt(1, current_id++);
    pstmt->setString(2, word);
    pstmt->setString(3, category);
    pstmt->executeUpdate();
    return true;
}


std::string Word::get_word()
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
    }

    sql::Statement *stmt;
    sql::ResultSet *res;
    stmt = con->get_connection()->createStatement();
    res = stmt->executeQuery("SELECT * FROM words ORDER BY RAND()");
    res->next();
    std::string result = res->getString("word");
    while (result.size() / 2  <= 10){
        res = stmt->executeQuery("SELECT * FROM words ORDER BY RAND()");
        res->next();
        result = res->getString("word");
    }
    return result;
}

bool Word::update_database(const std::string& filename, bool category)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
    }
    
    sql::Statement *stmt;
    sql::PreparedStatement  *pstmt;
    sql::ResultSet *res;
    std::ifstream input;
    input.open(filename);
    if (!input)
    {
        return false;
    }
    std::string buf, word;
    stmt = con->get_connection()->createStatement();
    res = stmt->executeQuery("SELECT * FROM words ORDER BY ID DESC LIMIT 1");
    int current_id = 1;
    if (res->next()){
        current_id = res->getInt(1) + 1;
    } 
    while (input) 
    {
        input >> buf;
        std::istringstream stream(buf);
        getline(stream, word, ';');
        pstmt = con->get_connection()->prepareStatement("INSERT INTO words(id, word, category) VALUES (?, ?, ?)");
        pstmt->setInt(1, current_id);
        pstmt->setString(2, word);
        if (category)
        {
            std::string category;
            getline(stream, category, ';');
            pstmt->setString(3, category);
        } else 
        {
            pstmt->setString(3, "-");
        }
        pstmt->executeUpdate();
        current_id++;
    }
    input.close();
    return true;
}


