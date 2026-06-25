#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string id, string name, string major, double gpa)
    : Person(id, name)
{
    this->major = major;
    this->gpa = gpa;
}
void Student::setMajor(string major) { this->major = major; }
void Student::setGPA(double gpa) { this->gpa = gpa; }
string Student::getMajor() const { return major; }
double Student::getGPA() const { return gpa; }
void Student::display() const
{
    cout << "ID: " << id << " | Name: " << name
         << " | Major: " << major << " | GPA: " << gpa;
}
