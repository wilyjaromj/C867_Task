using namespace std;

#include <iostream>
#include "roster.h"

Roster::Roster() : students() { }

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
{
	vector<int> numDaysPerCourse = { daysInCourse1, daysInCourse2, daysInCourse3 };
	students.push_back(new Student(studentID, firstName, lastName, emailAddress, age,
		numDaysPerCourse, degreeprogram));
}

void Roster::remove(string studentID) {
	auto spot = find_if(students.begin(), students.end(),
		[&](Student* student)-> bool {
			return (*student).GetStudentID() == studentID;
		});

	if (spot != students.end()) {
		students.erase(remove_if(students.begin(), students.end(),
			[&](Student* student)-> bool {
				return (*student).GetStudentID() == studentID;
			}), students.end());
	}
	else {
		cout << "A student with Id: " << studentID << ", was not found.";
	}
}

void Roster::printAll() {
	cout << "Printing full roster:\n";
	for (int i = 0; i < students.size(); ++i) {
		students.at(i)->print();
		cout << "\n";
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	int totalDays = 0;
	int numberOfCourses = 0;
	double averageDays = 0.0;

	for (int i = 0; i < students.size(); ++i) {
		if (students.at(i)->GetStudentID() == studentID) {
			for (int j = 0; j < students.at(i)->GetNumDaysPerCourse().size(); ++j) {
				totalDays = totalDays + students.at(i)->GetNumDaysPerCourse().at(j);
				++numberOfCourses;
			}
		}
	}

	averageDays = static_cast<double>(totalDays) / static_cast<double>(numberOfCourses);

	cout << "Average number of days in courses for student with Id ";
	cout << studentID << ": " << averageDays << "\n";
}

void Roster::printInvalidEmails() {
	int numInvalid = 0;
	cout << "Printing invalid email addresses:\n";
	for (int i = 0; i < students.size(); ++i) {
		string emailAddress = students.at(i)->GetEmailAddress();
		if (!((emailAddress.find('@') != string::npos)
			&& (emailAddress.find('.') != string::npos)
			&& (emailAddress.find(' ') == string::npos)))
		{
			++numInvalid;
			cout << "\t" << emailAddress << "\n";
		}
	}

	if (numInvalid == 0) {
		cout << "No invalid email addresses found.";
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	cout << "Printing by degree program:\n";
	for (int i = 0; i < students.size(); ++i) {
		if (students.at(i)->GetDegreeProgram() == degreeProgram) {
			students.at(i)->print();
			cout << "\n";
		}
	}
}