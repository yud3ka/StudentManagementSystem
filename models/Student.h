#pragma once
#include "Person.h"

class Student : public Person
{
private:
    double gpa;

public:
    Student(string id = "", string name = "", double gpa = 0.0);

    void setGPA(double gpa);
    double getGPA() const;

    void display() const override;
};
