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
		_count++;
		resize();
		_students[_count - 1] = *student;
	}

	void remove_student(Student* student) {
	}

	void print_students() {
		for (size_t i = 0; i < _count; i++)
			_students[i].print();
	}

private:
	void resize() {
		if (_students == nullptr) {
			_students = new Student[_count];
			return;
		}

		auto tmpStudents = new Student[_count];
		for (size_t i = 0; i < _count; i++)
			tmpStudents[i] = _students[i];

		delete[] _students;
		_students = tmpStudents;
	}
};