#include "room_words.h"
#include "gtest/gtest.h"

//проверка на правильность слова
TEST(WORDS_TEST, test_check_answer1) {
  Room_words test1;
  EXPECT_EQ(test1.check_answer("газонокосилка", "газон"), 1);
}
TEST(WORDS_TEST, test_check_answer2) {
  Room_words test1;
  EXPECT_EQ(test1.check_answer("газонокосилка", "косилка"), 1);
}
TEST(WORDS_TEST, test_check_answer3) {
  Room_words test1;
  EXPECT_EQ(test1.check_answer("гроб", "гриб"), -1);
}
TEST(WORDS_TEST, test_check_answer4) {
  Room_words test1;
  EXPECT_EQ(test1.check_answer("лампа", "арбуз"), -1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}