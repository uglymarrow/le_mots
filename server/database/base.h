class Base
{
    MYSQL *conn;
    
    std::string host;
    std::string user;
    std::string password;
public:
    Base();

    //Создание соединения
    int Connect();

    //Получение соединения
    MYSQL* getConnection(){}

    //Закрытие соединения
    ~Base();
};
