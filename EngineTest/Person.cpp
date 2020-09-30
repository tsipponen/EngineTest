#include "Person.h"

Person::Person() 
{
	setName(NULL);
	setJobTitle(NULL);
	setAge(NULL);
}
Person::Person(string nameC, string jobTitleC, int ageC) 
{
	name = nameC;
	jobTitle = jobTitleC;
	age = ageC;
}
string Person::getName() 
{
	return name;
}
void Person::setName(string name) 
{
	name = name;
}
string Person::getJobTitle()
{
	return jobTitle;
}
void Person::setJobTitle(string jobTitle)
{
	jobTitle = jobTitle;
}
int Person::getAge()
{
	return age;
}
void Person::setAge(int age)
{
	age = age;
}