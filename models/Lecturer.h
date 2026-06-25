#pragma once
#include "Person.h"

class Lecturer : public Person
{
private:
    string title;
    string departmentID;
public:
    Lecturer(string id = "", string name = "", string title = "", string departmentID = "");
    void setTitle(string title);
    void setDepartmentID(string departmentID);
    string getTitle() const;
    string getDepartmentID() const;
    void display() const;
};
