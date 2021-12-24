// #include "room.h"
// #include "gtest/gtest.h"

// //игра запускается,когда все готовы
// TEST(ROOM_TEST, test_start_game1) {
//   Connection_player test_player("alexey", "alex123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.start_game(), 1);
// }
// //неудачный запуск игры
// TEST(ROOM_TEST, test_start_game2) {
//   Connection_player test_player("alexey", "alex123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.start_game(), -1);
// }
// //игра окончилась
// TEST(ROOM_TEST, test_end_game1) {
//   Connection_player test_player("dmitriy", "dim123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.end_game(), 1);
// }
// //игра окончилась неудачно
// TEST(ROOM_TEST, test_end_game1) {
//   Connection_player test_player("dmitriy", "dim123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.end_game(), -1);
// }
// //комната существует
// TEST(ROOM_TEST, test_is_exist1) {
//   Connection_player test_player("dmitriy", "dim123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.end_game(), 1);
// }
// //комната не существует
// TEST(ROOM_TEST, test_is_exist2) {
//   Connection_player test_player("dmitriy", "dim123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.end_game(), 1);
// }

// //количество игроков в комнате
// TEST(ROOM_TEST, test_end_game2) {
//   Connection_player test_player("alexey", "alex123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_EQ(test_room.number_of_players(), 1);
// }

// //добавление игрока в комнату
// TEST(ROOM_TEST, ROOM_TEST_test_add1_Test) {
//   Connection_player test_player("alexey", "alex123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   Connection_player test_player2("dmitriy", "dim123", "password", 2, "aw");
//   EXPECT_NO_THROW(test_room.add_player(test_player2));
// }

// //при добавлении игрока, который уже в комнате
// TEST(ROOM_TEST, test_add2) {
//   Connection_player test_player("alexey", "alex123", "password", 2, "aw");
//   Room test_room("test", 1, test_player);
//   EXPECT_ANY_THROW(test_room.add_player(test_player));
// }


// int main(int argc, char **argv) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }