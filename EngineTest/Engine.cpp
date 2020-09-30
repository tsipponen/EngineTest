#include "Engine.h"
#include <iostream>
#include "Person.h"
#include <vector>
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
	string names[3] = {"Mauno", "Jouni", "Terho"};
	string jobTitles[3] = {"Unemployed", "IT consultant", "Painter"};
	int ages[3] = { 18, 27, 45 };

	std::vector<Person> persons;

	for (int i = 0; i < numberOfPersons - 1; i++)
	{
		string randomName = names[rand() % 2];
		string randomJobTitle = jobTitles[rand() % 2];
		int randomAge = ages[rand() % 2];

		Person person(randomName, randomJobTitle, randomAge);
		persons.push_back(person);
	}

	for (int i = 0; i < numberOfPersons - 1; i++)
	{
		cout << persons[i].getName() << ", " << persons[i].getJobTitle() <<
			", " << persons[i].getAge() << endl;
	}

}

