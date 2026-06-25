#include "Grade.h"
#include <iostream>
using namespace std;

Grade::Grade(string enrollmentID, double midterm, double finalExam)
{
    this->enrollmentID = enrollmentID;
    this->midterm = midterm;
    this->finalExam = finalExam;
    calculateAverage();
}
void Grade::setEnrollmentID(string enrollmentID) { this->enrollmentID = enrollmentID; }
void Grade::setMidterm(double midterm) { this->midterm = midterm; calculateAverage(); }
void Grade::setFinalExam(double finalExam) { this->finalExam = finalExam; calculateAverage(); }
string Grade::getEnrollmentID() const { return enrollmentID; }
double Grade::getMidterm() const { return midterm; }
double Grade::getFinalExam() const { return finalExam; }
double Grade::getAverage() const { return average; }
void Grade::calculateAverage()
{
    average = midterm * 0.4 + finalExam * 0.6;
}
void Grade::display() const
{
    cout << "Enrollment: " << enrollmentID
         << " | Mid: " << midterm
         << " | Final: " << finalExam
         << " | Avg: " << average;
}
