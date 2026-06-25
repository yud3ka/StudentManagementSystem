#pragma once
#include <string>
using namespace std;

class Course
{
private:
    string courseID;
    string subjectID;
    string semesterID;
    string lecturerID;
    int maxStudents;
public:
    Course(string courseID = "", string subjectID = "", string semesterID = "",
           string lecturerID = "", int maxStudents = 0);
    void setCourseID(string courseID);
    void setSubjectID(string subjectID);
    void setSemesterID(string semesterID);
    void setLecturerID(string lecturerID);
    void setMaxStudents(int maxStudents);
    string getCourseID() const;
    string getSubjectID() const;
    string getSemesterID() const;
    string getLecturerID() const;
    int getMaxStudents() const;
    void display() const;
};
