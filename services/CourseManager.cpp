#include "CourseManager.h"
#include <iostream>
using namespace std;

// ==================== Course ====================
void CourseManager::addCourse(const Course& c)
{
    for (size_t i = 0; i < courses.size(); ++i)
        if (courses[i].getCourseID() == c.getCourseID()) return;
    courses.push_back(c);
}

bool CourseManager::removeCourse(const string& courseID)
{
    for (size_t i = 0; i < courses.size(); ++i)
        if (courses[i].getCourseID() == courseID)
        {
            courses.erase(courses.begin() + i);
            return true;
        }
    return false;
}

Course* CourseManager::findCourse(const string& courseID)
{
    for (size_t i = 0; i < courses.size(); ++i)
        if (courses[i].getCourseID() == courseID) return &courses[i];
    return 0;
}

const Course* CourseManager::findCourse(const string& courseID) const
{
    for (size_t i = 0; i < courses.size(); ++i)
        if (courses[i].getCourseID() == courseID) return &courses[i];
    return 0;
}

void CourseManager::showAllCourses() const
{
    cout << "\n===== COURSE LIST =====\n";
    if (courses.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < courses.size(); ++i)
    {
        courses[i].display();
        cout << endl;
    }
}

// ==================== Subject ====================
void CourseManager::addSubject(const Subject& s)
{
    for (size_t i = 0; i < subjects.size(); ++i)
        if (subjects[i].getSubjectID() == s.getSubjectID()) return;
    subjects.push_back(s);
}

bool CourseManager::removeSubject(const string& subjectID)
{
    for (size_t i = 0; i < subjects.size(); ++i)
        if (subjects[i].getSubjectID() == subjectID)
        {
            subjects.erase(subjects.begin() + i);
            return true;
        }
    return false;
}

Subject* CourseManager::findSubject(const string& subjectID)
{
    for (size_t i = 0; i < subjects.size(); ++i)
        if (subjects[i].getSubjectID() == subjectID) return &subjects[i];
    return 0;
}

const Subject* CourseManager::findSubject(const string& subjectID) const
{
    for (size_t i = 0; i < subjects.size(); ++i)
        if (subjects[i].getSubjectID() == subjectID) return &subjects[i];
    return 0;
}

void CourseManager::showAllSubjects() const
{
    cout << "\n===== SUBJECT LIST =====\n";
    if (subjects.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < subjects.size(); ++i)
    {
        subjects[i].display();
        cout << endl;
    }
}

// ==================== Semester ====================
void CourseManager::addSemester(const Semester& s)
{
    for (size_t i = 0; i < semesters.size(); ++i)
        if (semesters[i].getSemesterID() == s.getSemesterID()) return;
    semesters.push_back(s);
}

bool CourseManager::removeSemester(const string& semesterID)
{
    for (size_t i = 0; i < semesters.size(); ++i)
        if (semesters[i].getSemesterID() == semesterID)
        {
            semesters.erase(semesters.begin() + i);
            return true;
        }
    return false;
}

Semester* CourseManager::findSemester(const string& semesterID)
{
    for (size_t i = 0; i < semesters.size(); ++i)
        if (semesters[i].getSemesterID() == semesterID) return &semesters[i];
    return 0;
}

const Semester* CourseManager::findSemester(const string& semesterID) const
{
    for (size_t i = 0; i < semesters.size(); ++i)
        if (semesters[i].getSemesterID() == semesterID) return &semesters[i];
    return 0;
}

void CourseManager::showAllSemesters() const
{
    cout << "\n===== SEMESTER LIST =====\n";
    if (semesters.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < semesters.size(); ++i)
    {
        semesters[i].display();
        cout << endl;
    }
}

// ==================== Department ====================
void CourseManager::addDepartment(const Department& d)
{
    for (size_t i = 0; i < departments.size(); ++i)
        if (departments[i].getDepartmentID() == d.getDepartmentID()) return;
    departments.push_back(d);
}

bool CourseManager::removeDepartment(const string& departmentID)
{
    for (size_t i = 0; i < departments.size(); ++i)
        if (departments[i].getDepartmentID() == departmentID)
        {
            departments.erase(departments.begin() + i);
            return true;
        }
    return false;
}

Department* CourseManager::findDepartment(const string& departmentID)
{
    for (size_t i = 0; i < departments.size(); ++i)
        if (departments[i].getDepartmentID() == departmentID) return &departments[i];
    return 0;
}

const Department* CourseManager::findDepartment(const string& departmentID) const
{
    for (size_t i = 0; i < departments.size(); ++i)
        if (departments[i].getDepartmentID() == departmentID) return &departments[i];
    return 0;
}

void CourseManager::showAllDepartments() const
{
    cout << "\n===== DEPARTMENT LIST =====\n";
    if (departments.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < departments.size(); ++i)
    {
        departments[i].display();
        cout << endl;
    }
}

// ==================== Lecturer ====================
void CourseManager::addLecturer(const Lecturer& l)
{
    for (size_t i = 0; i < lecturers.size(); ++i)
        if (lecturers[i].getID() == l.getID()) return;
    lecturers.push_back(l);
}

bool CourseManager::removeLecturer(const string& lecturerID)
{
    for (size_t i = 0; i < lecturers.size(); ++i)
        if (lecturers[i].getID() == lecturerID)
        {
            lecturers.erase(lecturers.begin() + i);
            return true;
        }
    return false;
}

Lecturer* CourseManager::findLecturer(const string& lecturerID)
{
    for (size_t i = 0; i < lecturers.size(); ++i)
        if (lecturers[i].getID() == lecturerID) return &lecturers[i];
    return 0;
}

const Lecturer* CourseManager::findLecturer(const string& lecturerID) const
{
    for (size_t i = 0; i < lecturers.size(); ++i)
        if (lecturers[i].getID() == lecturerID) return &lecturers[i];
    return 0;
}

void CourseManager::showAllLecturers() const
{
    cout << "\n===== LECTURER LIST =====\n";
    if (lecturers.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < lecturers.size(); ++i)
    {
        lecturers[i].display();
        cout << endl;
    }
}

// ==================== Enrollment ====================
void CourseManager::addEnrollment(const Enrollment& e)
{
    for (size_t i = 0; i < enrollments.size(); ++i)
        if (enrollments[i].getEnrollmentID() == e.getEnrollmentID()) return;
    enrollments.push_back(e);
}

bool CourseManager::removeEnrollment(const string& enrollmentID)
{
    for (size_t i = 0; i < enrollments.size(); ++i)
        if (enrollments[i].getEnrollmentID() == enrollmentID)
        {
            enrollments.erase(enrollments.begin() + i);
            return true;
        }
    return false;
}

Enrollment* CourseManager::findEnrollment(const string& enrollmentID)
{
    for (size_t i = 0; i < enrollments.size(); ++i)
        if (enrollments[i].getEnrollmentID() == enrollmentID) return &enrollments[i];
    return 0;
}

const Enrollment* CourseManager::findEnrollment(const string& enrollmentID) const
{
    for (size_t i = 0; i < enrollments.size(); ++i)
        if (enrollments[i].getEnrollmentID() == enrollmentID) return &enrollments[i];
    return 0;
}

void CourseManager::showAllEnrollments() const
{
    cout << "\n===== ENROLLMENT LIST =====\n";
    if (enrollments.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < enrollments.size(); ++i)
    {
        enrollments[i].display();
        cout << endl;
    }
}

// ==================== Grade ====================
void CourseManager::addGrade(const Grade& g)
{
    for (size_t i = 0; i < grades.size(); ++i)
        if (grades[i].getEnrollmentID() == g.getEnrollmentID()) return;
    grades.push_back(g);
}

bool CourseManager::removeGrade(const string& enrollmentID)
{
    for (size_t i = 0; i < grades.size(); ++i)
        if (grades[i].getEnrollmentID() == enrollmentID)
        {
            grades.erase(grades.begin() + i);
            return true;
        }
    return false;
}

Grade* CourseManager::findGrade(const string& enrollmentID)
{
    for (size_t i = 0; i < grades.size(); ++i)
        if (grades[i].getEnrollmentID() == enrollmentID) return &grades[i];
    return 0;
}

const Grade* CourseManager::findGrade(const string& enrollmentID) const
{
    for (size_t i = 0; i < grades.size(); ++i)
        if (grades[i].getEnrollmentID() == enrollmentID) return &grades[i];
    return 0;
}

void CourseManager::showAllGrades() const
{
    cout << "\n===== GRADE LIST =====\n";
    if (grades.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < grades.size(); ++i)
    {
        grades[i].display();
        cout << endl;
    }
}

// ==================== Attendance ====================
void CourseManager::addAttendance(const Attendance& a)
{
    for (size_t i = 0; i < attendances.size(); ++i)
        if (attendances[i].getEnrollmentID() == a.getEnrollmentID()) return;
    attendances.push_back(a);
}

bool CourseManager::removeAttendance(const string& enrollmentID)
{
    for (size_t i = 0; i < attendances.size(); ++i)
        if (attendances[i].getEnrollmentID() == enrollmentID)
        {
            attendances.erase(attendances.begin() + i);
            return true;
        }
    return false;
}

Attendance* CourseManager::findAttendance(const string& enrollmentID)
{
    for (size_t i = 0; i < attendances.size(); ++i)
        if (attendances[i].getEnrollmentID() == enrollmentID) return &attendances[i];
    return 0;
}

const Attendance* CourseManager::findAttendance(const string& enrollmentID) const
{
    for (size_t i = 0; i < attendances.size(); ++i)
        if (attendances[i].getEnrollmentID() == enrollmentID) return &attendances[i];
    return 0;
}

void CourseManager::showAllAttendances() const
{
    cout << "\n===== ATTENDANCE LIST =====\n";
    if (attendances.empty()) { cout << "Empty.\n"; return; }
    for (size_t i = 0; i < attendances.size(); ++i)
    {
        attendances[i].display();
        cout << endl;
    }
}

// ==================== Getters ====================
vector<Course>& CourseManager::getCourses() { return courses; }
const vector<Course>& CourseManager::getCourses() const { return courses; }

vector<Subject>& CourseManager::getSubjects() { return subjects; }
const vector<Subject>& CourseManager::getSubjects() const { return subjects; }

vector<Semester>& CourseManager::getSemesters() { return semesters; }
const vector<Semester>& CourseManager::getSemesters() const { return semesters; }

vector<Department>& CourseManager::getDepartments() { return departments; }
const vector<Department>& CourseManager::getDepartments() const { return departments; }

vector<Lecturer>& CourseManager::getLecturers() { return lecturers; }
const vector<Lecturer>& CourseManager::getLecturers() const { return lecturers; }

vector<Enrollment>& CourseManager::getEnrollments() { return enrollments; }
const vector<Enrollment>& CourseManager::getEnrollments() const { return enrollments; }

vector<Grade>& CourseManager::getGrades() { return grades; }
const vector<Grade>& CourseManager::getGrades() const { return grades; }

vector<Attendance>& CourseManager::getAttendances() { return attendances; }
const vector<Attendance>& CourseManager::getAttendances() const { return attendances; }
