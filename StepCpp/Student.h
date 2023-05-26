#pragma once
#include <string>

using namespace std;

class Student
{
private:
	string _name;
	int _age{};

public:

	Student() {};

	Student(string name, int age);

	string get_name();

	void print();
};
