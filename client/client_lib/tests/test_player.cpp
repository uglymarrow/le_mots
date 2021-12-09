#include "player.h"
#include "gtest/gtest.h"

//пользователь не существует
TEST(PLAYER_TEST, test_is_exist1) {
  Player test1("alexey", "alex123", "password", 2, "aw");
  EXPECT_ANY_THROW(test1.is_exist());
}
//пользователь существует
TEST(PLAYER_TEST, test_is_exist2) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_NO_THROW(test1.is_exist());
}
//вход пользователя неудачен
TEST(PLAYER_TEST, test_player_login1) {
  Player test1("alexey", "alex123", "password", 2, "aw");
  EXPECT_ANY_THROW(test1.player_login());
}
//вход пользователя удачен
TEST(PLAYER_TEST, test_player_login2) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_NO_THROW(test1.player_login());
}
//вывод статистики
TEST(PLAYER_TEST, test_stat) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  Stat test_stat1;
  EXPECT_EQ(test1.stat(), test_stat1);
}
//присоединение к комнате успешно
TEST(PLAYER_TEST, test_join_room1) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_NO_THROW(test1.join_room(1));
}
//присоединение к комнате неуспешно
TEST(PLAYER_TEST, test_join_room2) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_ANY_THROW(test1.join_room(10000));
}
//отправка неслова
TEST(PLAYER_TEST, test_send_word1) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_ANY_THROW(test1.send_word("123"));
}
//отправка слова, ответ не получен
TEST(PLAYER_TEST, test_send_word2) {
  Player test1("dmitriy", "dim123", "password", 2, "aw");
  EXPECT_ANY_THROW(test1.send_word("кошка"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}