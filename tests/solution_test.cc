#include "src/lib/solution.h"
#include "gtest/gtest.h"
using std::string;

TEST(AddShould, ReturnIntAdd) {
  Solution solution;
  int a = -10;
  int b = 1;
  int actual = solution.Add(a, b);
  int expected = -9;
  EXPECT_EQ(expected, actual);
}

TEST(AddShould, ReturnStrAdd) {
  Solution solution;
  string a = " ";
  string b = "!";
  string actual = solution.Add(a, b);
  string expected = " !";
  EXPECT_EQ(expected, actual);
}
TEST(AddShould, ReturnStrIntAdd) {
  Solution solution;
  string a = "HelloEE";
  int b = 599;
  string actual = solution.Add(a, b);
  string expected = "HelloEE599";
  EXPECT_EQ(expected, actual);
}