#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

using namespace std;

class Student {
    public:
        string GetStudentID() const;
        string GetFirstName() const;
        string GetLastName() const;
        string GetEmailAddress() const;
        int GetAge() const;
        int* GetNumDaysPerCourse() const;
        DegreeProgram GetDegreeProgram() const;

        void SetStudentID(string studentId);
        void SetFirstName(string firstName);
        void SetLastName(string lastName);
        void SetEmailAddress(string emailAddress);
        void SetAge(int age);
        void SetNumDaysPerSourse(int numDaysPerCourse[], int arraySize);
        void SetDegreeProgram(DegreeProgram degreeProgram);

        void print();

    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int numDaysPerCourse[3];
        DegreeProgram degreeProgram;
};

#endif