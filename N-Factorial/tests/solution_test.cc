#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialShould, HandlePositiveNum) {
  Solution solution;
  int input = 8;
  int expected = 40320;
  EXPECT_EQ(expected, solution.NoRecursiveFactorial(input));
  EXPECT_EQ(expected, solution.RecursiveFactorial(input));
}

TEST(FactorialShould, HandleNegativeNum) {
  Solution solution;
  int input = -20;
  int expected = 1;
  EXPECT_EQ(expected, solution.NoRecursiveFactorial(input));
  EXPECT_EQ(expected, solution.RecursiveFactorial(input));
}

TEST(FactorialShould, HandleZero) {
  Solution solution;
  int input = 0;
  int expected = 1;
  EXPECT_EQ(expected, solution.NoRecursiveFactorial(input));
  EXPECT_EQ(expected, solution.RecursiveFactorial(input));
}

TEST(FactorialShould, Overflow) {
  Solution solution;
  int input = 14;
  int expected = -1;
  EXPECT_EQ(expected, solution.NoRecursiveFactorial(input));
  EXPECT_EQ(expected, solution.RecursiveFactorial(input));
}