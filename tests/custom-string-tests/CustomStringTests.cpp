#include "gtest/gtest.h"

#include "custom-string/CustomString.h"

TEST(Constructor, HandlesWithCharArray) {
    CustomString customString({'a', 'b', 'c'});

    ASSERT_EQ(customString.getValue(), "abc");
}

TEST(Constructor, HandlesStringClass) {
    CustomString customString("abc");

    ASSERT_EQ(customString.getValue(), "abc");
}

TEST(OutputOperator, HandlesWord) {
    CustomString customString("abcd");

    stringstream output;
    output << customString;

    ASSERT_EQ(output.str(), "dcba");
}

TEST(OutputOperator, HandlesString) {
    CustomString customString("some word");

    stringstream output;
    output << customString;

    ASSERT_EQ(output.str(), "drow emos");
}

TEST(InputOperator, HandlesString) {
    stringstream input;
    input << "abcd";

    CustomString customString("");
    input >> customString;

    ASSERT_EQ(customString.getValue(), "dcba");
}
