#pragma once
#include <string>
using namespace std;

class Engine
{
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

