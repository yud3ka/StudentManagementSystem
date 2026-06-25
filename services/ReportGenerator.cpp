#include "ReportGenerator.h"
#include <iostream>
#include <algorithm>
using namespace std;

void ReportGenerator::showStudentList(const vector<Student>& students) const
{
    cout << "\n===== STUDENT LIST =====\n";
    if (students.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < students.size(); ++i)
    {
        students[i].display();
        cout << endl;
    }
}

void ReportGenerator::showCourseList(const vector<Course>& courses) const
{
    cout << "\n===== COURSE LIST =====\n";
    if (courses.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < courses.size(); ++i)
    {
        courses[i].display();
        cout << endl;
    }
}

void ReportGenerator::showTopStudents(const vector<Student>& students) const
{
    cout << "\n===== TOP STUDENTS (by GPA) =====\n";
    if (students.empty()) { cout << "Empty.\n"; return; }
    vector<Student> sorted = students;
    for (size_t i = 0; i < sorted.size(); ++i)
        for (size_t j = i+1; j < sorted.size(); ++j)
            if (sorted[i].getGPA() < sorted[j].getGPA())
                swap(sorted[i], sorted[j]);
    for (size_t i = 0; i < sorted.size() && i < 5; ++i)
    {
        sorted[i].display();
        cout << endl;
    }
}

void ReportGenerator::showGradeReport(const vector<Grade>& grades) const
{
    cout << "\n===== GRADE REPORT =====\n";
    if (grades.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < grades.size(); ++i)
    {
        grades[i].display();
        cout << endl;
    }
}

void ReportGenerator::showAttendanceReport(const vector<Attendance>& attendances) const
{
    cout << "\n===== ATTENDANCE REPORT =====\n";
    if (attendances.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < attendances.size(); ++i)
    {
        attendances[i].display();
        cout << endl;
    }
}
