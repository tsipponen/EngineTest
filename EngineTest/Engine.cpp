#ifndef UNICODE
#define UNICODE
#endif

#include "Engine.h"
#include <iostream>
#include "Person.h"
#include <vector>
#include <time.h>

#include <windows.h>

#include <winuser.h>

#if DEBUG
	#define LOG(x) std::cout << x << std::endl;
#else
	#define LOG(x)
#endif


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

void Engine::run(int numberOfPersons)
{
	string names[6] = { "Mauno", "Jouni", "Terho", "Mikko", "Jussi", "Pirjo" };
	string jobTitles[6] = {"Unemployed", "IT consultant", "Painter", "Salesman", "Accountant", "Cleaner"};
	int ages[6] = { 18, 27, 45, 31, 53, 66 };

	std::vector<Person> persons;
	string randomName;
	for (int i = 0; i < numberOfPersons; i++)
	{
		srand((unsigned) time(0) - rand() % 200);
		randomName = names[rand() % 6];
		string randomJobTitle = jobTitles[rand() % 6];
		int randomAge = ages[rand() % 6];

		Person person(randomName, randomJobTitle, randomAge);
		persons.push_back(person);
	}

	for (int i = 0; i < numberOfPersons; i++)
	{
		LOG(persons[i].getName());
		LOG(persons[i].getJobTitle());
		LOG(persons[i].getAge());
	}

}


