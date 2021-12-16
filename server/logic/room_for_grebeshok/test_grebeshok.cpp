#include "room_grebeshok.h"
#include "gtest/gtest.h"

//проверка на правильность слова
TEST(GREBESHOK_TEST, test_check_answer1) {
  Room_grebeshok test_room;
  EXPECT_EQ(test_room.check_answer("тлк", "молоток"), 1);
}
TEST(GREBESHOK_TEST, test_check_answer2) {
  Room_grebeshok test_room;
  EXPECT_EQ(test_room.check_answer("aбв", "кошка"), -1);
}
TEST(GREBESHOK_TEST, test_check_answer3) {
 Room_grebeshok test_room;
  EXPECT_EQ(test_room.check_answer("га", "агроном"), 1);
}
TEST(GREBESHOK_TEST, test_check_answer4) {
  Room_grebeshok test_room;
  EXPECT_EQ(test_room.check_answer("зво", "кружка"), -1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}