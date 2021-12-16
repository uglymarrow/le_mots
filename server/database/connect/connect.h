#pragma once 
#include "mysql_connection.h"

#include <boost/uuid/detail/md5.hpp>
#include <boost/algorithm/hex.hpp>

#include <fstream>
#include <sstream>

using boost::uuids::detail::md5;

#include <cppconn/driver.h>

#include <cppconn/exception.h>

#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class Connection_db{
    public:

    static Connection_db* get_instance();

    Connection_db(const Connection_db&) = delete;
    Connection_db operator=(const Connection_db&) = delete;
    ~Connection_db(){std::cout << "connect destroyed";};

    bool connect(const std::string& adress, const std::string& login, const std::string& password);

    sql::Connection* get_connection();

    bool is_open();

    void close();
    
    private:

    static Connection_db* instance;

    Connection_db(){};

    sql::Connection* con;
};