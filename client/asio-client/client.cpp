#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

using namespace boost::json;
using boost::asio::ip::tcp;

class Client {
public:
    Client(boost::asio::io_context &io_context): io_context_(io_context), socket_(io_context_) {}

    void connect(const std::string& server, const std::string& port) {
        tcp::resolver resolver(io_context_);
        tcp::resolver::query query(server, port);
        tcp::resolver::results_type endpoints = resolver.resolve(query);

        boost::asio::connect(socket_, endpoints);
    }

    std::string send(std::string &json) {
        boost::asio::write(socket_, boost::asio::buffer(json, json.size()));

        // Read the response status line. The response streambuf will automatically
        boost::asio::streambuf response_buf;
        boost::asio::read_until(socket_, response_buf, "\r\n");

        return std::string((std::istreambuf_iterator<char>(&response_buf)), std::istreambuf_iterator<char>() );
    }

private:
    boost::asio::io_context &io_context_;
    tcp::socket socket_;
    std::string msg;
    enum { max_length = 1024 };
    char data_[max_length];
};

int main(int argc, char* argv[]) {
    try
    {

        boost::asio::io_context io_context;

        Client api_client = Client(io_context);
        api_client.connect(std::string("127.0.0.1"), std::string("8000"));


        std::cout << api_client.login(std::string("anime"), std::string("228")) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}