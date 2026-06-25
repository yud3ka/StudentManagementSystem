#include "Lecturer.h"
#include <iostream>
using namespace std;

Lecturer::Lecturer(
    string id,
    string name,
    string title,
    string departmentID
) : Person(id, name)
{
    this->title = title;
    this->departmentID = departmentID;
}

void Lecturer::setTitle(string title)
{
    this->title = title;
}

void Lecturer::setDepartmentID(string departmentID)
{
    this->departmentID = departmentID;
}

string Lecturer::getTitle() const
{
    return title;
}

string Lecturer::getDepartmentID() const
{
    return departmentID;
}

void Lecturer::display() const
{
    cout << "ID: " << id
         << " | Name: " << name
         << " | Title: " << title
         << " | Department ID: " << departmentID;
}
