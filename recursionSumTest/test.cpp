#include "pch.h"
#include "recursionSum.h"
#include "recursionSumLib.cpp"

TEST(RecursionSumTest, NormalRange) {
    EXPECT_EQ(RecursionSum(0, 10), 55);
    EXPECT_EQ(RecursionSum(1, 100), 5050);
}

TEST(RecursionSumTest, ReverseRange) {
    EXPECT_EQ(RecursionSum(10, 0), 55);
    EXPECT_EQ(RecursionSum(100, 1), 5050);
}

TEST(RecursionSumTest, EdgeCases) {
    EXPECT_EQ(RecursionSum(5, 5), 5);
    EXPECT_EQ(RecursionSum(0, 0), 0);
    EXPECT_EQ(RecursionSum(-3, -3), -3);
}

TEST(RecursionSumTest, NegativeRanges) {
    EXPECT_EQ(RecursionSum(-5, 5), 0);
    EXPECT_EQ(RecursionSum(-3, -1), -6);
    EXPECT_EQ(RecursionSum(-1, -3), -6);
}

