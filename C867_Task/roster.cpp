using namespace std;

#include <iostream>
#include "roster.h"

Roster::Roster() : students() { }

void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
{
	vector<int> numDaysPerCourse = { daysInCourse1, daysInCourse2, daysInCourse3 };
	students.push_back(new Student(studentId, firstName, lastName, emailAddress, age,
		numDaysPerCourse, degreeprogram));
}

void Roster::remove(string studentId) {
	vector<Student*>::iterator spot = find_if(students.begin(), students.end(),
		[&](const Student student)-> bool {
			return student.GetStudentID() == studentId;
		});
	if (spot != students.end()) {
		students.erase(remove_if(students.begin(), students.end(),
			[&](const Student student)-> bool {
				return student.GetStudentID() == studentId;
			}), students.end());
	}
	else {
		cout << "A student with Id: " << studentId << " was not found";
	}
}

void Roster::printAll() {
	for (int i = 0; i < students.size(); ++i) {
		students.at(i)->print();
	}
}