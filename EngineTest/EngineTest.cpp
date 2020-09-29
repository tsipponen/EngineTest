#pragma once
#include <iostream>
#include "Build/EngineTestConfig.h"
#include "MathFunctions/MathFunctions.h"
#include "Engine.h"

using namespace std;

int main()
{
    Engine engine;
    cout << " Engine name: " << engine.getName() << ", version: " << EngineTest_VERSION_MAJOR
        << "." << EngineTest_VERSION_MINOR << endl;
    
    return 0;
}

