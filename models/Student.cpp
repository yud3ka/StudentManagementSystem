#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string id, string name, double gpa) : Person(id, name)
{
    this->gpa = gpa;
}

void Student::setGPA(double gpa)
{
    this->gpa = gpa;
}

double Student::getGPA() const
{
    return gpa;
}

void Student::display() const
{
    cout << "ID: " << id
         << " | Name: " << name
         << " | GPA: " << gpa;
}
