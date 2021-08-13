using namespace std;

#include "student.h"

string Student::GetStudentID() const {
	return studentID;
}

string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

string Student::GetEmailAddress() const {
	return emailAddress;
}

int Student::GetAge() const {
	return age;
}

const int* Student::GetNumDaysPerCourse() const {
	return numDaysPerCourse;
}

DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}