#include "room_one_letter.cpp"
#include "gtest/gtest.h"

//проверка на правильность слова
TEST(ONE_LETTER_TEST, test_check_answer1) {
  Room_one_letter test1;
  EXPECT_EQ(test1.check_answer("м", "молоток"), 1);
}
TEST(ONE_LETTER_TEST, test_check_answer2) {
  Room_one_letter test1;
  EXPECT_EQ(test1.check_answer("а", "арбуз"), 1);
}
TEST(ONE_LETTER_TEST, test_check_answer3) {
  Room_one_letter test1;
  EXPECT_EQ(test1.check_answer("г", "агроном"), -1);
}
TEST(ONE_LETTER_TEST, test_check_answer4) {
  Room_one_letter test1;
  EXPECT_EQ(test1.check_answer("з", "кружка"), -1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}