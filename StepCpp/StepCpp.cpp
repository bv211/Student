#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Group.h"

using namespace std;

int main() {
	setlocale(0, "");
	SetConsoleCP(1251);

	Student* stud = new Student("name", 30);
	Group group("пв211");

	group.add_student(stud);
	group.print_students();

	return 0;
}