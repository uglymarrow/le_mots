#include "room.h"
#include "gtest/gtest.h"

//пользователь не существует
TEST(ROOM_TEST, test_is_exist1) {
  Player test_player("alexey", "alex123", "password", 2, "aw");
  Room test_room("test", 1, test_player);
  EXPECT_ANY_THROW(test_room.start_game());
}
//пользователь существует
TEST(ROOM_TEST, test_is_exist2) {
  Player test_player("dmitriy", "dim123", "password", 2, "aw");
  Room test_room("test", 1, test_player);
  EXPECT_NO_THROW(test_room.start_game());
}
//ошибка при завершении игры
TEST(ROOM_TEST, test_end_game1) {
  Player test_player("alexey", "alex123", "password", 2, "aw");
  Room test_room("test", 1, test_player);
  EXPECT_ANY_THROW(test_room.end_game());
}
//игра завершилась успешно
TEST(ROOM_TEST, test_end_game2) {
  Player test_player("alexey", "alex123", "password", 2, "aw");
  Room test_room("test", 1, test_player);
  EXPECT_NO_THROW(test_room.end_game());
}
//количество игроков в комнате
TEST(ROOM_TEST, test_count1) {
  Player test_player("alexey", "alex123", "password", 2, "aw");
  Room test_room("test", 1, test_player);
  EXPECT_EQ(test_room.count_players(), 1);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}