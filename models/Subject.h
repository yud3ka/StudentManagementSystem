#pragma once
#include <string>
using namespace std;

class Subject
{
private:
    string subjectID;
    string subjectName;
    int credits;
public:
    Subject(string subjectID = "", string subjectName = "", int credits = 0);
    void setSubjectID(string subjectID);
    void setSubjectName(string subjectName);
    void setCredits(int credits);
    string getSubjectID() const;
    string getSubjectName() const;
    int getCredits() const;
    void display() const;
};
