#include "server.h"

#include <cstdlib>
#include <iostream>
#include <boost/bind/bind.hpp>
#include <boost/asio.hpp>

#include "connection.h"

using boost::asio::ip::tcp;

Server::Server(): acceptor_(io_context_, tcp::endpoint(tcp::v4(), PORT)) {
    start_accept();
}

void Server::run() {
    io_context_.run();
}

void Server::start_accept() {
    Connection* new_connection = new Connection(io_context_);
    acceptor_.async_accept(new_connection->socket(), boost::bind(&Server::handle_accept, this, new_connection, boost::asio::placeholders::error));
}

void Server::handle_accept(Connection* new_connection, const boost::system::error_code& error) {
    if (!error) {
        new_connection->start();
    } else {
        delete new_connection;
    }

    start_accept();
}