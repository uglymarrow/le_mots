// #include "game.h"
// #include "gtest/gtest.h"

// //удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room_grebeshok test_room;
//   EXPECT_NO_THROW(test1.add_room_grebeshok(test_room));
// }

// //не удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room test_room;
//   EXPECT_ANY_THROW(test1.add_room(test_room));
// }

// //удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room_words test_room;
//   EXPECT_NO_THROW(test1.add_room_words(test_room));
// }

// //не удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room_words test_room;
//   EXPECT_ANY_THROW(test1.add_room_words(test_room));
// }

// //удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room_one_letter test_room;
//   EXPECT_NO_THROW(test1.add_room_one_letter(test_room));
// }

// //не удалось добавить комнату в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Room_one_letter test_room;
//   EXPECT_ANY_THROW(test1.add_room_one_letter(test_room));
// }

// //удалось добавить игрока в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Connect_player test_player;
//   EXPECT_NO_THROW(test1.add_player(test_room));
// }

// //не удалось добавить игрока в игру
// TEST(GAME_TEST, test_add1) {
//   Game test1;
//   Connect_player test_player;
//   EXPECT_ANY_THROW(test1.add_player(test_player));
// }

// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }