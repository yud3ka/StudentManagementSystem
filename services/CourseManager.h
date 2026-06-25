#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "../models/Course.h"
#include "../models/Subject.h"
#include "../models/Department.h"
#include "../models/Lecturer.h"
#include "../models/Enrollment.h"
#include "../models/Grade.h"
#include "../models/Attendance.h"
using namespace std;
// ===== �?nh nghia Semester (g?p t? Semester.h) =====
class Semester
{
private:
    string semesterID;
    string semesterName;
public:
    Semester(string id = "", string name = "")
    {
        semesterID = id;
        semesterName = name;
    }
    void setSemesterID(string id) { semesterID = id; }
    void setSemesterName(string name) { semesterName = name; }
    string getSemesterID() const { return semesterID; }
    string getSemesterName() const { return semesterName; }
    void display() const
    {
        cout << "Semester ID: " << semesterID
             << " | Name: " << semesterName;
    }
};
// =================================================

class CourseManager
{
private:
    vector<Course> courses;
    vector<Subject> subjects;
    vector<Semester> semesters;
    vector<Department> departments;
    vector<Lecturer> lecturers;
    vector<Enrollment> enrollments;
    vector<Grade> grades;
    vector<Attendance> attendances;

public:
    // Course
    void addCourse(const Course& c);
    bool removeCourse(const string& courseID);
    Course* findCourse(const string& courseID);
    const Course* findCourse(const string& courseID) const;
    void showAllCourses() const;

    // Subject
    void addSubject(const Subject& s);
    bool removeSubject(const string& subjectID);
    Subject* findSubject(const string& subjectID);
    const Subject* findSubject(const string& subjectID) const;
    void showAllSubjects() const;

    // Semester
    void addSemester(const Semester& s);
    bool removeSemester(const string& semesterID);
    Semester* findSemester(const string& semesterID);
    const Semester* findSemester(const string& semesterID) const;
    void showAllSemesters() const;

    // Department
    void addDepartment(const Department& d);
    bool removeDepartment(const string& departmentID);
    Department* findDepartment(const string& departmentID);
    const Department* findDepartment(const string& departmentID) const;
    void showAllDepartments() const;

    // Lecturer
    void addLecturer(const Lecturer& l);
    bool removeLecturer(const string& lecturerID);
    Lecturer* findLecturer(const string& lecturerID);
    const Lecturer* findLecturer(const string& lecturerID) const;
    void showAllLecturers() const;

    // Enrollment
    void addEnrollment(const Enrollment& e);
    bool removeEnrollment(const string& enrollmentID);
    Enrollment* findEnrollment(const string& enrollmentID);
    const Enrollment* findEnrollment(const string& enrollmentID) const;
    void showAllEnrollments() const;

    // Grade
    void addGrade(const Grade& g);
    bool removeGrade(const string& enrollmentID);
    Grade* findGrade(const string& enrollmentID);
    const Grade* findGrade(const string& enrollmentID) const;
    void showAllGrades() const;

    // Attendance
    void addAttendance(const Attendance& a);
    bool removeAttendance(const string& enrollmentID);
    Attendance* findAttendance(const string& enrollmentID);
    const Attendance* findAttendance(const string& enrollmentID) const;
    void showAllAttendances() const;

    // Getters
    vector<Course>& getCourses();
    const vector<Course>& getCourses() const;
    vector<Subject>& getSubjects();
    const vector<Subject>& getSubjects() const;
    vector<Semester>& getSemesters();
    const vector<Semester>& getSemesters() const;
    vector<Department>& getDepartments();
    const vector<Department>& getDepartments() const;
    vector<Lecturer>& getLecturers();
    const vector<Lecturer>& getLecturers() const;
    vector<Enrollment>& getEnrollments();
    const vector<Enrollment>& getEnrollments() const;
    vector<Grade>& getGrades();
    const vector<Grade>& getGrades() const;
    vector<Attendance>& getAttendances();
    const vector<Attendance>& getAttendances() const;
};
