#include <iostream>
#include <limits>
#include "UI/Menu.h"
#include "services/Validator.h"
#include "services/StudentManager.h"
#include "services/CourseManager.h"
#include "services/ReportGenerator.h"
#include "services/FileManager.h"

using namespace std;

int main()
{
    Menu menu("STUDENT MANAGEMENT SYSTEM");
    menu << "Add student"
         << "Show students"
         << "Add subject"
         << "Show subjects"
         << "Add semester"
         << "Show semesters"
         << "Add department"
         << "Show departments"
         << "Add lecturer"
         << "Show lecturers"
         << "Add course"
         << "Show courses"
         << "Add enrollment"
         << "Show enrollments"
         << "Add grade"
         << "Show grades"
         << "Add attendance"
         << "Show attendances"
         << "Reports"
         << "Save data"
         << "Load data"
         << "Exit";

    Validator val;
    StudentManager studentManager;
    CourseManager courseManager;
    ReportGenerator report;
    FileManager fileManager;

    while (true)
    {
        int choice = menu.choose();

        // ---- Add student ----
        if (choice == 0)
        {
            string id, name, major;
            double gpa;
            cout << "Enter ID: "; getline(cin, id);
            cout << "Enter name: "; getline(cin, name);
            cout << "Enter major: "; getline(cin, major);
            cout << "Enter GPA: ";
            if (!(cin >> gpa)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid GPA.\n"; continue; }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(id) || !val.isValidName(name) || !val.isValidName(major) || !val.isValidGPA(gpa))
            {
                cout << "Invalid data.\n";
                continue;
            }
            studentManager.addStudent(Student(id, name, major, gpa));
            cout << "Student added.\n";
        }
        // ---- Show students ----
        else if (choice == 1)
        {
            studentManager.showAllStudents();
        }
        // ---- Add subject ----
        else if (choice == 2)
        {
            string id, name;
            int credits;
            cout << "Subject ID: "; getline(cin, id);
            cout << "Subject name: "; getline(cin, name);
            cout << "Credits: ";
            if (!(cin >> credits)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(id) || !val.isValidName(name) || !val.isValidCredits(credits))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addSubject(Subject(id, name, credits));
            cout << "Subject added.\n";
        }
        // ---- Show subjects ----
        else if (choice == 3)
        {
            courseManager.showAllSubjects();
        }
        // ---- Add semester ----
        else if (choice == 4)
        {
            string id, name;
            cout << "Semester ID: "; getline(cin, id);
            cout << "Semester name: "; getline(cin, name);
            if (!val.isValidID(id) || !val.isValidName(name))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addSemester(Semester(id, name));
            cout << "Semester added.\n";
        }
        // ---- Show semesters ----
        else if (choice == 5)
        {
            courseManager.showAllSemesters();
        }
        // ---- Add department ----
        else if (choice == 6)
        {
            string id, name;
            cout << "Department ID: "; getline(cin, id);
            cout << "Department name: "; getline(cin, name);
            if (!val.isValidID(id) || !val.isValidName(name))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addDepartment(Department(id, name));
            cout << "Department added.\n";
        }
        // ---- Show departments ----
        else if (choice == 7)
        {
            courseManager.showAllDepartments();
        }
        // ---- Add lecturer ----
        else if (choice == 8)
        {
            string id, name, title, deptID;
            cout << "Lecturer ID: "; getline(cin, id);
            cout << "Name: "; getline(cin, name);
            cout << "Title: "; getline(cin, title);
            cout << "Department ID: "; getline(cin, deptID);
            if (!val.isValidID(id) || !val.isValidName(name) || !val.isValidName(title) || !val.isValidID(deptID))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addLecturer(Lecturer(id, name, title, deptID));
            cout << "Lecturer added.\n";
        }
        // ---- Show lecturers ----
        else if (choice == 9)
        {
            courseManager.showAllLecturers();
        }
        // ---- Add course ----
        else if (choice == 10)
        {
            string courseID, subjectID, semesterID, lecturerID;
            int maxStudents;
            cout << "Course ID: "; getline(cin, courseID);
            cout << "Subject ID: "; getline(cin, subjectID);
            cout << "Semester ID: "; getline(cin, semesterID);
            cout << "Lecturer ID: "; getline(cin, lecturerID);
            cout << "Max students: ";
            if (!(cin >> maxStudents)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(courseID) || !val.isValidID(subjectID) || !val.isValidID(semesterID) || !val.isValidID(lecturerID) || !val.isValidPositiveInt(maxStudents))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addCourse(Course(courseID, subjectID, semesterID, lecturerID, maxStudents));
            cout << "Course added.\n";
        }
        // ---- Show courses ----
        else if (choice == 11)
        {
            courseManager.showAllCourses();
        }
        // ---- Add enrollment ----
        else if (choice == 12)
        {
            string enrollmentID, studentID, courseID, date;
            cout << "Enrollment ID: "; getline(cin, enrollmentID);
            cout << "Student ID: "; getline(cin, studentID);
            cout << "Course ID: "; getline(cin, courseID);
            cout << "Enroll date (YYYY-MM-DD): "; getline(cin, date);
            if (!val.isValidID(enrollmentID) || !val.isValidID(studentID) || !val.isValidID(courseID) || !val.isValidName(date))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addEnrollment(Enrollment(enrollmentID, studentID, courseID, date));
            cout << "Enrollment added.\n";
        }
        // ---- Show enrollments ----
        else if (choice == 13)
        {
            courseManager.showAllEnrollments();
        }
        // ---- Add grade ----
        else if (choice == 14)
        {
            string enrollmentID;
            double mid, finalExam;
            cout << "Enrollment ID: "; getline(cin, enrollmentID);
            cout << "Midterm score: ";
            if (!(cin >> mid)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cout << "Final exam score: ";
            if (!(cin >> finalExam)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(enrollmentID) || !val.isValidScore(mid) || !val.isValidScore(finalExam))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addGrade(Grade(enrollmentID, mid, finalExam));
            cout << "Grade added.\n";
        }
        // ---- Show grades ----
        else if (choice == 15)
        {
            courseManager.showAllGrades();
        }
        // ---- Add attendance ----
        else if (choice == 16)
        {
            string enrollmentID;
            int present, absent;
            cout << "Enrollment ID: "; getline(cin, enrollmentID);
            cout << "Present days: ";
            if (!(cin >> present)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cout << "Absent days: ";
            if (!(cin >> absent)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); cout << "Invalid.\n"; continue; }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(enrollmentID) || !val.isValidPositiveInt(present) || !val.isValidPositiveInt(absent))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addAttendance(Attendance(enrollmentID, present, absent));
            cout << "Attendance added.\n";
        }
        // ---- Show attendances ----
        else if (choice == 17)
        {
            courseManager.showAllAttendances();
        }
        // ---- Reports ----
        else if (choice == 18)
        {
            // sub-menu for reports
            Menu reportMenu("REPORTS");
            reportMenu << "Student list"
                       << "Course list"
                       << "Top students"
                       << "Grade report"
                       << "Attendance report"
                       << "Back";
            int rchoice = reportMenu.choose();
            if (rchoice == 0) report.showStudentList(studentManager.getStudents());
            else if (rchoice == 1) report.showCourseList(courseManager.getCourses());
            else if (rchoice == 2) report.showTopStudents(studentManager.getStudents());
            else if (rchoice == 3) report.showGradeReport(courseManager.getGrades());
            else if (rchoice == 4) report.showAttendanceReport(courseManager.getAttendances());
            // else back
        }
        // ---- Save data ----
        else if (choice == 19)
        {
            fileManager.saveStudents(studentManager.getStudents());
            fileManager.saveCourses(courseManager.getCourses());
            fileManager.saveSubjects(courseManager.getSubjects());
            fileManager.saveEnrollments(courseManager.getEnrollments());
            fileManager.saveGrades(courseManager.getGrades());
            fileManager.saveAttendances(courseManager.getAttendances());
            cout << "All data saved.\n";
        }
        // ---- Load data ----
        else if (choice == 20)
        {
            fileManager.loadStudents(studentManager.getStudents());
            fileManager.loadCourses(courseManager.getCourses());
            fileManager.loadSubjects(courseManager.getSubjects());
            fileManager.loadEnrollments(courseManager.getEnrollments());
            fileManager.loadGrades(courseManager.getGrades());
            fileManager.loadAttendances(courseManager.getAttendances());
            cout << "All data loaded.\n";
        }
        // ---- Exit ----
        else if (choice == 21)
        {
            cout << "Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
