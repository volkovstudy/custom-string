#include "gtest/gtest.h"

#include "custom-string/CustomString.h"

TEST(OutputOperator, HandlesString) {
    CustomString customString("abcd");

    stringstream output;
    output << customString;

    ASSERT_EQ(output.str(), "dcba");
}

TEST(OutputOperator, HandlesWord) {
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
