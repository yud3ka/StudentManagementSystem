#include "validator.h"
#include <cctype>
bool Validator::isNotEmpty(const string& str) {
    return !str.empty();
}
bool Validator::isValidName(const string& name) {
    if (name.empty()) return false;
    
    // Quet tung ky tu trong chuoi ten
    for (char c : name) {
        if (!isalpha(c) && !isspace(c)) {
            return false;
        }
    }
    return true;
}

bool Validator::isValidId(const string& id) {
    if (id.empty()) {
        return false;
    }
    
    if (id.length() != 12) {
        return false;
    }

    for (char c : id) {
        if (!isalnum(c)) { 
            return false; 
        }
    }
    return true;
}
bool Validator::isValidGPA(double gpa) {
    return (gpa >= 0.0 && gpa <= 10.0);
}