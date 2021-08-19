#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "degree.h"

using namespace std;

class Student {
    public:
        Student(string studentID, string firstName, string lastName, string emailAddress,
            int age, vector<int> numDaysPerCourse, DegreeProgram degreeProgram);

        string GetStudentID() const;
        string GetFirstName() const;
        string GetLastName() const;
        string GetEmailAddress() const;
        int GetAge() const;
        vector<int> GetNumDaysPerCourse() const;
        DegreeProgram GetDegreeProgram() const;

        void SetStudentID(string studentId);
        void SetFirstName(string firstName);
        void SetLastName(string lastName);
        void SetEmailAddress(string emailAddress);
        void SetAge(int age);
        void SetNumDaysPerCourse(vector<int> const &numDaysPerCourse);
        void SetDegreeProgram(DegreeProgram degreeProgram);

        void print();

    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        vector<int> numDaysPerCourse;
        DegreeProgram degreeProgram;

        string GetDegreeProgramAsString();
        string GetNumDaysInCourseAsString();
};
#endif