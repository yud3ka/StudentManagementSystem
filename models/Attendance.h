#pragma once
#include <string>
using namespace std;

class Attendance
{
private:
    string enrollmentID;
    int presentDays;
    int absentDays;
public:
    Attendance(string enrollmentID = "", int presentDays = 0, int absentDays = 0);
    void setEnrollmentID(string enrollmentID);
    void setPresentDays(int presentDays);
    void setAbsentDays(int absentDays);
    string getEnrollmentID() const;
    int getPresentDays() const;
    int getAbsentDays() const;
    int getTotalDays() const;
    void display() const;
};
