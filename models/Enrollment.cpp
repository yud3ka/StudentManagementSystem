#include "Enrollment.h"
#include <iostream>
using namespace std;

Enrollment::Enrollment(string enrollmentID, string studentID, string courseID, string enrollDate)
{
    this->enrollmentID = enrollmentID;
    this->studentID = studentID;
    this->courseID = courseID;
    this->enrollDate = enrollDate;
}
void Enrollment::setEnrollmentID(string enrollmentID) { this->enrollmentID = enrollmentID; }
void Enrollment::setStudentID(string studentID) { this->studentID = studentID; }
void Enrollment::setCourseID(string courseID) { this->courseID = courseID; }
void Enrollment::setEnrollDate(string enrollDate) { this->enrollDate = enrollDate; }
string Enrollment::getEnrollmentID() const { return enrollmentID; }
string Enrollment::getStudentID() const { return studentID; }
string Enrollment::getCourseID() const { return courseID; }
string Enrollment::getEnrollDate() const { return enrollDate; }
void Enrollment::display() const
{
    cout << "Enrollment ID: " << enrollmentID
         << " | Student: " << studentID
         << " | Course: " << courseID
         << " | Date: " << enrollDate;
}
