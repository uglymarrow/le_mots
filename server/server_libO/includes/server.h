#pragma once

#include <cstdlib>
#include <boost/asio.hpp>

#include "connection.h"

using boost::asio::ip::tcp;

constexpr uint16_t PORT = 8000;

class Server {
public:
    Server();

    void run();

private:
    void start_accept();

    void handle_accept(Connection* new_connection, const boost::system::error_code& error);

private:
    boost::asio::io_context io_context_;
    tcp::acceptor acceptor_;
};