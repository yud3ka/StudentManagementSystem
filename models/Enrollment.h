#pragma once
#include <string>
using namespace std;

class Enrollment
{
private:
    string enrollmentID;
    string studentID;
    string courseID;
    string enrollDate;
public:
    Enrollment(string enrollmentID = "", string studentID = "", string courseID = "", string enrollDate = "");
    void setEnrollmentID(string enrollmentID);
    void setStudentID(string studentID);
    void setCourseID(string courseID);
    void setEnrollDate(string enrollDate);
    string getEnrollmentID() const;
    string getStudentID() const;
    string getCourseID() const;
    string getEnrollDate() const;
    void display() const;
};
