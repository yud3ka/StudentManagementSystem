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

        switch (choice)
        {
        case 0:
        {
            string id, name, major;
            double gpa;
            cout << "Enter ID: "; getline(cin, id);
            cout << "Enter name: "; getline(cin, name);
            cout << "Enter major: "; getline(cin, major);
            cout << "Enter GPA: ";
            if (!(cin >> gpa)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid GPA.\n"; 
                continue; 
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(id) || !val.isValidName(name) || !val.isValidName(major) || !val.isValidGPA(gpa))
            {
                cout << "Invalid data.\n";
                continue;
            }
            studentManager.addStudent(Student(id, name, major, gpa));
            cout << "Student added.\n";
            break;
        }
        case 1:
        {
            studentManager.showAllStudents();
            break;
        }
        case 2:
        {
            string id, name;
            int credits;
            cout << "Subject ID: "; getline(cin, id);
            cout << "Subject name: "; getline(cin, name);
            cout << "Credits: ";
            if (!(cin >> credits)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(id) || !val.isValidName(name) || !val.isValidCredits(credits))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addSubject(Subject(id, name, credits));
            cout << "Subject added.\n";
            break;
        }
        case 3:
        {
            courseManager.showAllSubjects();
            break;
        }
        case 4:
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
            break;
        }
        case 5:
        {
            courseManager.showAllSemesters();
            break;
        }
        case 6:
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
            break;
        }
        case 7:
        {
            courseManager.showAllDepartments();
            break;
        }
        case 8:
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
            break;
        }
        case 9:
        {
            courseManager.showAllLecturers();
            break;
        }
        case 10:
        {
            string courseID, subjectID, semesterID, lecturerID;
            int maxStudents;
            cout << "Course ID: "; getline(cin, courseID);
            cout << "Subject ID: "; getline(cin, subjectID);
            cout << "Semester ID: "; getline(cin, semesterID);
            cout << "Lecturer ID: "; getline(cin, lecturerID);
            cout << "Max students: ";
            if (!(cin >> maxStudents)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(courseID) || !val.isValidID(subjectID) || !val.isValidID(semesterID) || !val.isValidID(lecturerID) || !val.isValidPositiveInt(maxStudents))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addCourse(Course(courseID, subjectID, semesterID, lecturerID, maxStudents));
            cout << "Course added.\n";
            break;
        }
        case 11:
        {
            courseManager.showAllCourses();
            break;
        }
        case 12:
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
            break;
        }
        case 13:
        {
            courseManager.showAllEnrollments();
            break;
        }
        case 14:
        {
            string enrollmentID;
            double mid, finalExam;
            cout << "Enrollment ID: "; getline(cin, enrollmentID);
            cout << "Midterm score: ";
            if (!(cin >> mid)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cout << "Final exam score: ";
            if (!(cin >> finalExam)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(enrollmentID) || !val.isValidScore(mid) || !val.isValidScore(finalExam))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addGrade(Grade(enrollmentID, mid, finalExam));
            cout << "Grade added.\n";
            break;
        }
        case 15:
        {
            courseManager.showAllGrades();
            break;
        }
        case 16:
        {
            string enrollmentID;
            int present, absent;
            cout << "Enrollment ID: "; getline(cin, enrollmentID);
            cout << "Present days: ";
            if (!(cin >> present)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cout << "Absent days: ";
            if (!(cin >> absent)) { 
                cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Invalid.\n"; 
                continue; 
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (!val.isValidID(enrollmentID) || !val.isValidPositiveInt(present) || !val.isValidPositiveInt(absent))
            {
                cout << "Invalid.\n";
                continue;
            }
            courseManager.addAttendance(Attendance(enrollmentID, present, absent));
            cout << "Attendance added.\n";
            break;
        }
        case 17:
        {
            courseManager.showAllAttendances();
            break;
        }
        case 18:
        {
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
            break;
        }
        case 19:
        {
            fileManager.saveStudents(studentManager.getStudents());
            fileManager.saveCourses(courseManager.getCourses());
            fileManager.saveSubjects(courseManager.getSubjects());
            fileManager.saveEnrollments(courseManager.getEnrollments());
            fileManager.saveGrades(courseManager.getGrades());
            fileManager.saveAttendances(courseManager.getAttendances());
            cout << "All data saved.\n";
            break;
        }
        case 20:
        {
            fileManager.loadStudents(studentManager.getStudents());
            fileManager.loadCourses(courseManager.getCourses());
            fileManager.loadSubjects(courseManager.getSubjects());
            fileManager.loadEnrollments(courseManager.getEnrollments());
            fileManager.loadGrades(courseManager.getGrades());
            fileManager.loadAttendances(courseManager.getAttendances());
            cout << "All data loaded.\n";
            break;
        }
        case 21:
        {
            cout << "Goodbye!\n";
            return 0;
        }
        default:
        {
            cout << "Invalid choice.\n";
            break;
        }
        }
    }

    return 0;
}