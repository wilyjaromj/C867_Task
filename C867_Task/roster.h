#ifndef ROSTER_H
#define ROSTER_H

using namespace std;

#include <string>
#include <vector>
#include "degree.h"
#include "student.h"

class Roster {
public:
	Roster();

	void add(string studentId, string firstName, string lastName, string emailAddress, int age,
		int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	void remove(string studentId);
	void printAll();
	void printAverageDaysInCourse(string studentId);
	void printByDegreeProgram(DegreeProgram degreeProgram);
private:
	vector<Student*> students;
};
#endif
