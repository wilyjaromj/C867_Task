using namespace std;

#include "student.h"

Student::Student(string studentId, string firstName, string lastName, string emailAddress, 
	int age, vector<int> numDaysPerCourse, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->numDaysPerCourse = numDaysPerCourse;
	this->degreeProgram = degreeProgram;
}

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

vector<int> Student::GetNumDaysPerCourse() const {
	return numDaysPerCourse;
}

DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}

void Student::SetStudentID(string studentid) {
	this->studentID = studentID;
}

void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::SetLastName(string lastName) {
	this->lastName = lastName;
}

void Student::SetEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::SetAge(int age) {
	this->age = age;
}

void Student::SetNumDaysPerCourse(vector<int> const& numDaysPerCourse) {
	this->numDaysPerCourse = numDaysPerCourse;
}

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}
