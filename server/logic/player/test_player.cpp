// #include "player.h"
// #include "gtest/gtest.h"

// //пользователь не существует
// TEST(PLAYER_TEST, test_is_exist1) {
//   Player test1("alexey", "alex123", "password", 2, "aw");
//   EXPECT_EQ(test1.is_exist(), -1);
// }
// //пользователь существует
// TEST(PLAYER_TEST, test_is_exist2) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_EQ(test1.is_exist(), 1);
// }
// //вход пользователя неудачен
// TEST(PLAYER_TEST, test_player_login1) {
//   Player test1("alexey", "alex123", "password", 2, "aw");
//   EXPECT_ANY_THROW(test1.player_login());
// }
// //вход пользователя удачен
// TEST(PLAYER_TEST, test_player_login2) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_NO_THROW(test1.player_login());
// }
// //вывод статистики
// TEST(PLAYER_TEST, test_stat) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   Stat test_stat1;
//   EXPECT_EQ(test1.stat(), test_stat1);
// }
// //присоединение к комнате успешно
// TEST(PLAYER_TEST, test_join_room1) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_NO_THROW(test1.join_room(1));
// }
// //присоединение к комнате неуспешно
// TEST(PLAYER_TEST, test_join_room2) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_ANY_THROW(test1.join_room(10000));
// }
// //проверка готовности пользователя
// TEST(PLAYER_TEST, test_ready1) {
//   Player test1("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_EQ(test1.is_ready(), true);
// }
// //пользователь не готов
// TEST(PLAYER_TEST, test_ready) {
//   Player test1("alexey", "alex123", "password", 2, "aw");
//   EXPECT_EQ(test1.is_ready(), false);
// }

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }