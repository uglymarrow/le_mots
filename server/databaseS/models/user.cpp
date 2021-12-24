#include "user.h"
#include "connect.h"

bool User::is_exist(const std::string& login) {

    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
    }
    
    sql::Statement *stmt;
    sql::ResultSet *res;

    try {
        stmt = con->get_connection()->createStatement();
        res = stmt->executeQuery("SELECT * FROM profiles WHERE (login = '" + login + "')");
        if (!res->next()) {
            return false;
        } else return true;
    } catch (sql::SQLException &e) {
        std::cout << e.getSQLState() << std::endl;
        return false;
    }
}

Player User::login(const std::string& login, const std::string& password)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database") ;
    }
    
    sql::Statement *stmt; 
    sql::ResultSet *res;

    if (!this->is_exist(login))
    {
        throw std::invalid_argument("User doesn`t exist");
    }
    
    stmt = con->get_connection()->createStatement();
    res = stmt->executeQuery("SELECT * FROM profiles WHERE (login = '" + login + "' and password = '" + this->secure_pass(password) + "')");
    if ((res->next())){
        Stat stat_login;
        stat_login.games = res->getInt(4);
        stat_login.win_game = res->getInt(5);
        stat_login.lose_game = stat_login.games - stat_login.win_game;
        Player to_login(
            login, password, res->getInt(1), stat_login
        );
        return to_login;
    } else 
    {
        throw std::invalid_argument("Invalid login or password");
    }
}

bool User::sign_in(const std::string& login, const std::string& password)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database") ;
    }
    
    sql::Statement *stmt; 
    sql::PreparedStatement *pstmt;
    sql::ResultSet *res;

    if (this->is_exist(login))
    {
        throw std::invalid_argument("User exist. Please, log in");
    }

    //определение последнего id
    stmt = con->get_connection()->createStatement();
    res = stmt->executeQuery("SELECT * FROM profiles ORDER BY ID DESC LIMIT 1");
    res->next();
    int current_id = res->getInt(1);
    //добавление пользователя в базу данных 
    try{
        pstmt = con->get_connection()->prepareStatement("insert into profiles(id, nickname, login, games, wins, password) values (?, ?, ?, ?, ?, ?)");
        pstmt->setInt(1, current_id+1);
        pstmt->setString(2, login);
        pstmt->setInt(3, 0);
        pstmt->setInt(4, 0);
        pstmt->setString(5, this->secure_pass(password));
        pstmt->executeUpdate();
        return true;
    } catch (sql::SQLException &e) {
        return false;
    }
}

std::string User::secure_pass(const std::string& pass)
{
        md5 hash;
        md5::digest_type digest;
        
        hash.process_bytes(pass.data(), pass.size());
        hash.get_digest(digest);

        const auto charDigest = reinterpret_cast<const char *>(&digest);
        std::string result;
        boost::algorithm::hex(charDigest, charDigest + sizeof(md5::digest_type), std::back_inserter(result));
        return result;
}

bool User::update_field(const std::string& login, const std::string &field_name, const std::string& data) {

    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }

    sql::PreparedStatement *pstmt;

    if (!this->is_exist(login))
    {
        throw std::invalid_argument("User doenst`t exist");
        return false;
    }

    if (field_name == "password"){
        pstmt = con->get_connection()->prepareStatement("update profiles set " + field_name + " = '" + secure_pass(data) + "' where (login = '" + login + "')");
    } 
    else
    {
        pstmt = con->get_connection()->prepareStatement("update profiles set " + field_name + " = '" + data + "' where (login = '" + login + "')");

    }

    try {
        if (pstmt->executeUpdate() == 0) {
            return false;
        }
    } catch (sql::SQLException &e) {
        return false;
    }

    return true;
}

bool User::update_login(const std::string& login, const std::string &data)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }

    if (data.empty())
    {
        return false;
    }
    return User::update_field(login, "login", data);
}

bool User::update_password(const std::string& login, const std::string &data)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }

    if (data.empty())
    {
        return false;
    }

    return User::update_field(login, "password", data);
}

bool User::update_stat(const std::string& login, const int& games, const int& wins)
{
    if (!con->is_open()) {
        throw std::domain_error("Doesn`t connect to database");
        return false;
    }

    return (User::update_field(login, "games", std::to_string(games)) && User::update_field(login, "wins", std::to_string(wins)));
}

User::User()
{
    con = Connection_db::get_instance();
    con->connect("tcp://127.0.0.1:3306", "ks", "123");
}

User::~User()
{
    // con->close();
}
