#include "Department.h"
#include <iostream>
using namespace std;

Department::Department(string departmentID, string departmentName)
{
    this->departmentID = departmentID;
    this->departmentName = departmentName;
}
void Department::setDepartmentID(string departmentID) { this->departmentID = departmentID; }
void Department::setDepartmentName(string departmentName) { this->departmentName = departmentName; }
string Department::getDepartmentID() const { return departmentID; }
string Department::getDepartmentName() const { return departmentName; }
void Department::display() const
{
    cout << "Department ID: " << departmentID << " | Name: " << departmentName;
}
