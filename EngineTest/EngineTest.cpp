
#include <iostream>
#include "Build/EngineTestConfig.h"
#include "MathFunctions/MathFunctions.h"

int main()
{
   
    std::cout << " Version " << EngineTest_VERSION_MAJOR << "."
        << EngineTest_VERSION_MINOR << std::endl;
    mysqrt(100.0);
}