#include <gtest/gtest.h>
#include <ConsoleOutput.hpp>

TEST(test_case_name, test_name1)
{
    ASSERT_EQ(1, 0);
}

TEST(test_case_name, test_name2)
{
    EXPECT_EQ(1, 1);
    ASSERT_GT(1,2);
    EXPECT_GT(1,2);
    EXPECT_GT(1,2);
}

TEST(test_case_name, test_name3)
{
    ASSERT_EQ(1, 0);
}

TEST(test_case_name, test_name4)
{
    ASSERT_EQ(1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
