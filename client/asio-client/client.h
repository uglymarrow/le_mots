using boost::asio::ip::tcp;


class Client
{
    tcp::resolver resolver_;
    tcp::socket socket_;
public:
    Client(boost::asio::io_context& io_context): resolver_(io_context), socket_(io_context) {}

private:
    void connect(std::string host){}

    void write_request(std::sstring json){}

    std::string read_answer();
};