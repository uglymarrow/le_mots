#include "base .h"
#include "gtest/gtest.h"

//Успешное подключение к бд
TEST(BASE_TEST, test_add1) {
	Base data();
	ASSERT_NO_THROW(data.connect());
}

//Успешное получение соединения
TEST(BASE_TEST, test_add1) {
	Base data();
    data.connect();
	ASSERT_ANY_THROW(data.getConnection());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}