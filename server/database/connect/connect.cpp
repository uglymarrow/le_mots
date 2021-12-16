#include "connect.h"

#define dbase_name "le_mots"


Connection_db* Connection_db::instance = 0;

bool Connection_db::connect(const std::string& adress, const std::string& login, const std::string& password)
{
    if (con == nullptr || con->isClosed()) {
        try
        {
            sql::Driver* driver = get_driver_instance();
            con = driver->connect(adress, login, password);
            con->setSchema(dbase_name);
            return true;
        } catch (sql::SQLException &e) {
            std::cout << "Could not to connect to database '" << dbase_name << "'" << std::endl;
            return false;
        }
    }
    return true;
}

bool Connection_db::is_open() {
    return !con->isClosed();
}

void Connection_db::close() {
    if (con == nullptr) {
        return;
    }

    if (!con->isClosed()) {
        con->close();
    }
}

Connection_db* Connection_db::get_instance() 
{
     if (instance == nullptr) {//если не было выделено, то создаем
        instance = new Connection_db();
    }
    return instance;
}

sql::Connection* Connection_db::get_connection()
{
    return con;
}



