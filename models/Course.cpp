#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(string courseID, string subjectID, string semesterID, string lecturerID, int maxStudents)
{
    this->courseID = courseID;
    this->subjectID = subjectID;
    this->semesterID = semesterID;
    this->lecturerID = lecturerID;
    this->maxStudents = maxStudents;
}
void Course::setCourseID(string courseID) { this->courseID = courseID; }
void Course::setSubjectID(string subjectID) { this->subjectID = subjectID; }
void Course::setSemesterID(string semesterID) { this->semesterID = semesterID; }
void Course::setLecturerID(string lecturerID) { this->lecturerID = lecturerID; }
void Course::setMaxStudents(int maxStudents) { this->maxStudents = maxStudents; }
string Course::getCourseID() const { return courseID; }
string Course::getSubjectID() const { return subjectID; }
string Course::getSemesterID() const { return semesterID; }
string Course::getLecturerID() const { return lecturerID; }
int Course::getMaxStudents() const { return maxStudents; }
void Course::display() const
{
    cout << "Course ID: " << courseID
         << " | Subject: " << subjectID
         << " | Semester: " << semesterID
         << " | Lecturer: " << lecturerID
         << " | Max: " << maxStudents;
}
