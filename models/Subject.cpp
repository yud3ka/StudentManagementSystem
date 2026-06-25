#include "Subject.h"
#include <iostream>
using namespace std;

Subject::Subject(string subjectID, string subjectName, int credits)
{
    this->subjectID = subjectID;
    this->subjectName = subjectName;
    this->credits = credits;
}
void Subject::setSubjectID(string subjectID) { this->subjectID = subjectID; }
void Subject::setSubjectName(string subjectName) { this->subjectName = subjectName; }
void Subject::setCredits(int credits) { this->credits = credits; }
string Subject::getSubjectID() const { return subjectID; }
string Subject::getSubjectName() const { return subjectName; }
int Subject::getCredits() const { return credits; }
void Subject::display() const
{
    cout << "Subject ID: " << subjectID << " | Name: " << subjectName << " | Credits: " << credits;
}
