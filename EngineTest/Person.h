#pragma once
#include<string>

using namespace std;

class Person
{
	private:
		string name;
		string jobTitle;
		int age;

	public:
		Person();
		Person(string name, string jobTitle, int age);
		string getName();
		void setName(string name);
		string getJobTitle();
		void setJobTitle(string jobTitle);
		int getAge();
		void setAge(int age);
};

