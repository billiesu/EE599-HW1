#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesConsecutiveNumbersEvenLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 6, 10};
  EXPECT_EQ(solution.FindMedian(inputs), 4);
}

TEST(FindMaxTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 10};
  EXPECT_EQ(solution.FindMedian(inputs), 3);
}

TEST(FindMaxTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
}

TEST(FindMaxTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
}