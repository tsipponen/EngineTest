#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
	name = "tiny";
}

string Engine::getName()
{
	return name;
}

void Engine::setName(string name)
{
	name = name;
}

