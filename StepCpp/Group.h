#pragma once
#include <iostream>
#include "Student.h"

using namespace std;

class Group
{
private:
	Student* _students = nullptr;
	int _count = 0;

public:
	string name;

	Group(string name)
	{
		this->name = name;
	}

	void add_student(Student* student) {
	}

	void remove_student(Student* student) {
	}

private:
	void resize() {
	}
};