#include "client.h"
#include "gtest/gtest.h"

//Сервер успешно запускается
TEST(CLIENT_TEST, test_add1) {
    boost::asio::io_context io_context_;
	Client c(io_context_);
	EXPECT_NO_THROW(c.start());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}