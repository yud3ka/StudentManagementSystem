#include "Person.h"

Person::Person(string id, string name)
{
    this->id = id;
    this->name = name;
}
void Person::setID(string id) { this->id = id; }
void Person::setName(string name) { this->name = name; }
string Person::getID() const { return id; }
string Person::getName() const { return name; }
