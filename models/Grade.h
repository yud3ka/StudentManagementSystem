#pragma once
#include <string>
using namespace std;

class Grade
{
private:
    string enrollmentID;
    double midterm;
    double finalExam;
    double average;
public:
    Grade(string enrollmentID = "", double midterm = 0.0, double finalExam = 0.0);
    void setEnrollmentID(string enrollmentID);
    void setMidterm(double midterm);
    void setFinalExam(double finalExam);
    string getEnrollmentID() const;
    double getMidterm() const;
    double getFinalExam() const;
    double getAverage() const;
    void calculateAverage();
    void display() const;
};
