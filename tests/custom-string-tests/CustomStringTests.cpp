#include "gtest/gtest.h"

#include "custom-string/CustomString.h"

TEST(OutputOperator, HandlesString) {
    CustomString customString("abcd");

    stringstream output;
    output << customString;

    ASSERT_EQ(output.str(), "dcba");
}
