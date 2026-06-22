#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "../models/Student.h" 

using namespace std;

class StudentManager {
private:
    vector<Student> studentList; 
public:
    void addStudent();                 
    void displayAllStudents();        
    void findStudent(string targetId);  
    void deleteStudent(string targetId);
};
