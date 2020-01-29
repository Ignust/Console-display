#include <gtest/gtest.h>
#include <ConsoleOutput.hpp>


class TestConsoleOutput : public ::testing::Test {
    public:
    virtual ~TestConsoleOutput(){}
    protected:
        virtual void SetUp() {
            //mCO = &ConsoleOutput::init();
        }
};
/*
TEST_F(TestConsoleOutput, printTest) {
    uint8_t** testArray = nullptr;
    EXPECT_ANY_THROW(mCO->print(testArray,1 ,2));
}*/

TEST(TestConsoleOutput,printTest1){

    uint8_t** testArray = nullptr;

    EXPECT_ANY_THROW(ConsoleOutput::init().print(testArray,1 ,2));
}


