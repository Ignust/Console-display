#include <stdint.h>
#include <windows.h>

#include "headers/ConsoleOutput.hpp"

int main()
{
    const uint8_t ySize = 5;
    const uint8_t xSize = 10;

    uint8_t** mFildArray = new uint8_t*[ySize];
    for(uint8_t a = 0; a < ySize; ++a){
        mFildArray[a] = new uint8_t[xSize];
    }

    for(uint8_t y = 0; y < ySize; ++y){
        for(uint8_t x = 0; x < xSize; ++x){
            mFildArray[y][x] = 'o';
        }
    }

    ConsoleOutput mConsoleOutput = ConsoleOutput::init();
    mConsoleOutput.print(mFildArray, xSize, ySize);
    system("pause");
    mFildArray[0][0] = '1';
    mConsoleOutput.print(mFildArray, xSize, ySize);
    system("pause");
    mFildArray[1][1] = '1';
    mConsoleOutput.print(mFildArray, xSize, ySize);
    system("pause");
    mFildArray[2][2] = '1';
    mConsoleOutput.print(mFildArray, xSize, ySize);


    for(int a = 0; a < ySize; ++a){
        delete [] mFildArray[a];
    }
    delete [] mFildArray;

    return 0;
}
