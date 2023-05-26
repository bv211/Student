#include "Student.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student(string name, int age) {
	_name = name;
	_age = age;
}

string Student::get_name()
{
	return _name;
}

void Student::print() {
	cout << "Имя: " << _name << endl;
	cout << "Возраст: " << _age << endl;
}