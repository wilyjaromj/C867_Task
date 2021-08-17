using namespace std;

#include <iostream>
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

void Student::print() {
	cout << "Student: " << this->firstName << " " << this->lastName << endl;
	cout << "Email: " << this->emailAddress << endl;
	cout << "Age: " << this->age << endl;
	cout << "Days in Course: " << GetNumDaysInCourseAsString() << endl;
	cout << "Degree Program: " << GetDegreeProgramAsString() << endl;
}

string Student::GetDegreeProgramAsString() {
	string output = "";

	switch (this->degreeProgram)
	{
	case DegreeProgram::SECURITY:
		output = "SECURITY";
		break;
	case DegreeProgram::NETWORK:
		output = "NETWORK";
		break;
	case DegreeProgram::SOFTWARE:
		output = "SOFTWARE";
		break;
	}

	return output;
}

string Student::GetNumDaysInCourseAsString() {
	string output = "";
	int size = this->numDaysPerCourse.size();

	for (int i = 0; i < size; ++i) {
		string numToString = to_string(this->numDaysPerCourse.at(i));
		if (i < size - 1) {
			output = output + numToString + ", ";
		}
		else {
			output = output + numToString;
		}
	}

	return output;
}
