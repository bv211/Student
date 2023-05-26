#pragma once
#include <string>

using namespace std;

class Student
{
private:
	int _age{};
	string _name;

public:

	Student();
	Student(int age, string name);
};
