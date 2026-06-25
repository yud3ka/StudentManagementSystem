#pragma once
#include <string>
using namespace std;

class Department
{
private:
    string departmentID;
    string departmentName;
public:
    Department(string departmentID = "", string departmentName = "");
    void setDepartmentID(string departmentID);
    void setDepartmentName(string departmentName);
    string getDepartmentID() const;
    string getDepartmentName() const;
    void display() const;
};
