#include "Attendance.h"
#include <iostream>
using namespace std;

Attendance::Attendance(string enrollmentID, int presentDays, int absentDays)
{
    this->enrollmentID = enrollmentID;
    this->presentDays = presentDays;
    this->absentDays = absentDays;
}
void Attendance::setEnrollmentID(string enrollmentID) { this->enrollmentID = enrollmentID; }
void Attendance::setPresentDays(int presentDays) { this->presentDays = presentDays; }
void Attendance::setAbsentDays(int absentDays) { this->absentDays = absentDays; }
string Attendance::getEnrollmentID() const { return enrollmentID; }
int Attendance::getPresentDays() const { return presentDays; }
int Attendance::getAbsentDays() const { return absentDays; }
int Attendance::getTotalDays() const { return presentDays + absentDays; }
void Attendance::display() const
{
    cout << "Enrollment: " << enrollmentID
         << " | Present: " << presentDays
         << " | Absent: " << absentDays
         << " | Total: " << getTotalDays();
}
