#include "studentManager.h"

// 1. Logic cho hàm thêm sinh viên
void StudentManager::addStudent() {
    cout << "\n=== THEM SINH VIEN MOI ===\n";
    
    string id, name;
    
    cout << "Nhap Ma SV: ";
    cin >> id;
    cin.ignore();
    
    cout << "Nhap Ho va Ten: ";
    getline(cin, name);

    // Tạo ra 1 tờ hồ sơ trống
    Student newStudent(id, name, 0.0);
    studentList.push_back(newStudent);
    
    cout << "=> Da them sinh vien vao danh sach thanh cong!\n";
}

void StudentManager::displayAllStudents() {
    cout << "\n=== DANH SACH SINH VIEN ===\n";
    
    // Kiểm tra xem tủ có trống không
    if (studentList.empty()) {
        cout << "Danh sach hien dang chua co ai!\n";
        return; // Thoát hàm
    }

    for (size_t i = 0; i < studentList.size(); i++) {
        cout << "Sinh vien thu " << i + 1 << ":\n";
        
        studentList[i].display(); 
        cout << "-----------------------\n";
    }
}
