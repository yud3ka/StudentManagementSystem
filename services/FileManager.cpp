#include "FileManager.h"
#include <fstream>
#include <sstream>
using namespace std;

// ---- Students ----
void FileManager::saveStudents(const vector<Student>& students, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < students.size(); ++i)
        fout << students[i].getID() << '|'
             << students[i].getName() << '|'
             << students[i].getMajor() << '|'
             << students[i].getGPA() << '\n';
}
void FileManager::loadStudents(vector<Student>& students, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    students.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string id, name, major, gpaStr;
        stringstream ss(line);
        getline(ss, id, '|');
        getline(ss, name, '|');
        getline(ss, major, '|');
        getline(ss, gpaStr);
        double gpa = 0.0;
        stringstream conv(gpaStr);
        conv >> gpa;
        students.push_back(Student(id, name, major, gpa));
    }
}

// ---- Courses ----
void FileManager::saveCourses(const vector<Course>& courses, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < courses.size(); ++i)
        fout << courses[i].getCourseID() << '|'
             << courses[i].getSubjectID() << '|'
             << courses[i].getSemesterID() << '|'
             << courses[i].getLecturerID() << '|'
             << courses[i].getMaxStudents() << '\n';
}
void FileManager::loadCourses(vector<Course>& courses, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    courses.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string courseID, subjectID, semesterID, lecturerID, maxStr;
        stringstream ss(line);
        getline(ss, courseID, '|');
        getline(ss, subjectID, '|');
        getline(ss, semesterID, '|');
        getline(ss, lecturerID, '|');
        getline(ss, maxStr);
        int max = 0;
        stringstream conv(maxStr);
        conv >> max;
        courses.push_back(Course(courseID, subjectID, semesterID, lecturerID, max));
    }
}

// ---- Subjects ----
void FileManager::saveSubjects(const vector<Subject>& subjects, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < subjects.size(); ++i)
        fout << subjects[i].getSubjectID() << '|'
             << subjects[i].getSubjectName() << '|'
             << subjects[i].getCredits() << '\n';
}
void FileManager::loadSubjects(vector<Subject>& subjects, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    subjects.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string id, name, credStr;
        stringstream ss(line);
        getline(ss, id, '|');
        getline(ss, name, '|');
        getline(ss, credStr);
        int credits = 0;
        stringstream conv(credStr);
        conv >> credits;
        subjects.push_back(Subject(id, name, credits));
    }
}

// ---- Enrollments ----
void FileManager::saveEnrollments(const vector<Enrollment>& enrollments, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < enrollments.size(); ++i)
        fout << enrollments[i].getEnrollmentID() << '|'
             << enrollments[i].getStudentID() << '|'
             << enrollments[i].getCourseID() << '|'
             << enrollments[i].getEnrollDate() << '\n';
}
void FileManager::loadEnrollments(vector<Enrollment>& enrollments, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    enrollments.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string eid, sid, cid, date;
        stringstream ss(line);
        getline(ss, eid, '|');
        getline(ss, sid, '|');
        getline(ss, cid, '|');
        getline(ss, date);
        enrollments.push_back(Enrollment(eid, sid, cid, date));
    }
}

// ---- Grades ----
void FileManager::saveGrades(const vector<Grade>& grades, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < grades.size(); ++i)
        fout << grades[i].getEnrollmentID() << '|'
             << grades[i].getMidterm() << '|'
             << grades[i].getFinalExam() << '\n';
}
void FileManager::loadGrades(vector<Grade>& grades, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    grades.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string eid, midStr, finalStr;
        stringstream ss(line);
        getline(ss, eid, '|');
        getline(ss, midStr, '|');
        getline(ss, finalStr);
        double mid = 0.0, fin = 0.0;
        stringstream conv1(midStr); conv1 >> mid;
        stringstream conv2(finalStr); conv2 >> fin;
        grades.push_back(Grade(eid, mid, fin));
    }
}

// ---- Attendances ----
void FileManager::saveAttendances(const vector<Attendance>& attendances, const string& filename) const
{
    ofstream fout(filename.c_str());
    for (size_t i = 0; i < attendances.size(); ++i)
        fout << attendances[i].getEnrollmentID() << '|'
             << attendances[i].getPresentDays() << '|'
             << attendances[i].getAbsentDays() << '\n';
}
void FileManager::loadAttendances(vector<Attendance>& attendances, const string& filename) const
{
    ifstream fin(filename.c_str());
    if (!fin.is_open()) return;
    attendances.clear();
    string line;
    while (getline(fin, line))
    {
        if (line.empty()) continue;
        string eid, preStr, absStr;
        stringstream ss(line);
        getline(ss, eid, '|');
        getline(ss, preStr, '|');
        getline(ss, absStr);
        int pre = 0, abs = 0;
        stringstream conv1(preStr); conv1 >> pre;
        stringstream conv2(absStr); conv2 >> abs;
        attendances.push_back(Attendance(eid, pre, abs));
    }
}
