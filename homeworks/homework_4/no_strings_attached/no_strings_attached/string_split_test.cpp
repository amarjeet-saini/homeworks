#include <gtest/gtest.h>
#include <no_strings_attached/string_split.h>
#include <vector>

namespace {
    using no_strings_attached::Split;
}

TEST(SplitValidationTest, SplitTwoWordsOnString) {
    const auto test_string = "hello world";
    const auto split = Split(test_string, " ");
    EXPECT_EQ("hello", split.front()) << "Failed to split: " << test_string << "'";
    EXPECT_EQ("world", split.back()) << "Failed to split: " << test_string << "'";
}

TEST(SplitValidationTest, SplitRepeatedWords) {
    const auto test_string = "aaabaaba";
    const auto split = Split(test_string, "aa");
    EXPECT_EQ("", split.front()) << "Failed to split: " << test_string << "'";
    EXPECT_EQ("ba", split.back()) << "Failed to split: " << test_string << "'";
    EXPECT_EQ("ab", split[1]) << "Failed to split: " << test_string << "'";
    EXPECT_EQ(3, split.size()) << "Failed to split: " << test_string << "'";
}