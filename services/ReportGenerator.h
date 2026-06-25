#pragma once
#include <vector>
#include "../models/Student.h"
#include "../models/Course.h"
#include "../models/Grade.h"
#include "../models/Attendance.h"
using namespace std;

class ReportGenerator
{
public:
    void showStudentList(const vector<Student>& students) const;
    void showCourseList(const vector<Course>& courses) const;
    void showTopStudents(const vector<Student>& students) const; // s?p x?p theo GPA
    void showGradeReport(const vector<Grade>& grades) const;
    void showAttendanceReport(const vector<Attendance>& attendances) const;
};
