#pragma once
#include "Person.h"

class Student : public Person
{
private:
    string major;
    double gpa;
public:
    Student(string id = "", string name = "", string major = "", double gpa = 0.0);
    void setMajor(string major);
    void setGPA(double gpa);
    string getMajor() const;
    double getGPA() const;
    void display() const;
};
