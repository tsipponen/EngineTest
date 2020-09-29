#pragma once
#include <iostream>
#include "Build/EngineTestConfig.h"
#include "MathFunctions/MathFunctions.h"

using namespace std;

class Engine {
    private:
        string name;
    public: 
        Engine() {
            name = "tiny";
        }
        string getName() {
            return name;
        }
        void setName(string x) {
            name = x;
        }
};

int main()
{
    Engine engine;
    cout << " Engine name: " << engine.getName() << ", version: " << EngineTest_VERSION_MAJOR
        << "." << EngineTest_VERSION_MINOR << endl;
    cin.get();
    return 0;
}

