#include <gtest/gtest.h>
#include <ConsoleOutput.hpp>


class TestConsoleOutput : public ::testing::Test {
public:
    virtual ~TestConsoleOutput(){
        for(int a = 0; a < mYSize; ++a){
            delete [] mFildArray[a];
        }
        delete [] mFildArray;

    }
protected:
    virtual void SetUp() {
        mFildArray = new uint8_t*[mYSize];
        for(uint8_t a = 0; a < mYSize; ++a){
            mFildArray[a] = new uint8_t[mXSize];
        }

        for(uint8_t y = 0; y < mYSize; ++y){
            for(uint8_t x = 0; x < mXSize; ++x){
                mFildArray[y][x] = 'o';
            }
        }
    }
    const uint8_t mYSize = 5;
    const uint8_t mXSize = 10;
    uint8_t** mFildArray;
};
/*
//------------------------------------------------------------------------------------------
TEST_F(TestConsoleOutput, printTest)
//------------------------------------------------------------------------------------------
{
    //EXPECT_NO_THROW(ConsoleOutput::init().print(mFildArray, mXSize , mYSize));
}
*/
//------------------------------------------------------------------------------------------
TEST_F(TestConsoleOutput,printTestNullptr)
//------------------------------------------------------------------------------------------
{
    uint8_t** testArray = nullptr;
    EXPECT_ANY_THROW(ConsoleOutput::init().print(testArray,mXSize ,mYSize));
    EXPECT_THROW(ConsoleOutput::init().print(testArray,mXSize ,mYSize), int);
}


