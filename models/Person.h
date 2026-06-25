#pragma once
#include <string>
using namespace std;

class Person
{
protected:
    string id;
    string name;
public:
    Person(string id = "", string name = "");
    void setID(string id);
    void setName(string name);
    string getID() const;
    string getName() const;
    virtual void display() const = 0;
    virtual ~Person() {}
};
