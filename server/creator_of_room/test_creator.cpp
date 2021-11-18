#include "creator_of_room.h"
#include "gtest/gtest.h"

//удалось создать комнату
TEST(CREATOR_TEST, check_create_room1) {
  Creator test1;
  EXPECT_NO_THROW(test1.create_room(1));
}
//комнату создать не удалось
TEST(CREATOR_TEST, test_check_create_room2) {
  Creator test1;
  EXPECT_ANY_THROW(test1.create_room(10000));
}
//удалось удалить пользователя
TEST(CREATOR_TEST, test_delete_player1) {
  Creator test1;
  EXPECT_NO_THROW(test1.delete_player(1));
}
//не удалось удалить пользователя
TEST(CREATOR_TEST, delete_player2) {
  Creator test1;
  EXPECT_ANY_THROW(test1.delete_player(10000));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}