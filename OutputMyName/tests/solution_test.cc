#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MyMsgShould, ReturnMyMsg) {
  Solution solution;
  std::string actual = solution.PrintMyMsg();
  std::string expected = "Name:BinlingSu, Major: Electrical Engineering Expertise:Coding, Interests:Running, Dancing";
  EXPECT_EQ(expected, actual);
}