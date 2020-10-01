#pragma once
#include <string>

#define DEBUG 1

using namespace std;

class Engine{
    private:
        string name;
    public:
        Engine();
        string getName();
        void setName(string name);
        void run(int numberOfPersons);
};


    


