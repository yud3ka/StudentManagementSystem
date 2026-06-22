#pragma once
#include <string>

using namespace std;

class Validator {
public:
    // Kiem tra chuoi co bi de trong khong
    static bool isNotEmpty(const string& str);

    // Kiem tra ten (chi duoc chua chu cai va khoang trang, khong chua so)
    static bool isValidName(const string& name);

    // Kiem tra ID (khong duoc chua khoang trang)
    static bool isValidId(const string& id);

    // Kiem tra diem GPA (phai nam trong khoang tu 0.0 den 10.0)
    static bool isValidGPA(double gpa);
};
