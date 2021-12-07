#include "server.h"
#include "gtest/gtest.h"

//Сервер успешно запускается
TEST(SERVER_TEST, test_add1) {
	Server s(8000);
	EXPECT_NO_THROW(s.run());
}

//Сокет успешно запускается
TEST(SERVER_TEST, test_add1) {
	boost::asio::io_context io_context_;
	Connection c(io_context_);
	EXPECT_ANY_THROW(c.start());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}(Connection* new_connection, const boost::system::error_code& error){}
};