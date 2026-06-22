#include "menu.h"
#include <iostream>
using namespace std;

void Menu::displayMainMenu() {
    cout << "\n========================================\n";
    cout << "      HE THONG QUAN LY TRUONG HOC       \n";
    cout << "========================================\n";
    cout << "1. Quan ly Ho so Sinh vien\n";
    cout << "2. Quan ly Ho so Giang vien (Chờ Đức Hiếu)\n";
    cout << "3. Quan ly Mon hoc & Ghi danh (Chờ Trọng Sơn)\n";
    cout << "0. Luu du lieu & Thoat chuong trinh\n";
    cout << "----------------------------------------\n";
}
void Menu::displayStudentMenu() {
    cout << "\n--- [MENU] QUAN LY SINH VIEN ---\n";
    cout << "1. Them sinh vien moi\n";
    cout << "2. Hien thi danh sach sinh vien\n";
    cout << "3. Tim kiem sinh vien (Tính năng mở rộng)\n";
    cout << "4. Xoa sinh vien (Tính năng mở rộng)\n";
    cout << "0. Quay lai Menu chinh\n";
    cout << "--------------------------------\n";
}
void Menu::displayLecturerMenu() {
    cout << "\n--- [MENU] QUAN LY GIANG VIEN ---\n";
    cout << "(Tính năng này sẽ được Khang ráp khi Đức Hiếu xong code)\n";
    cout << "0. Quay lai Menu chinh\n";
}
void Menu::displayCourseMenu() {
    cout << "\n--- [MENU] QUAN LY MON HOC ---\n";
    cout << "(Tính năng này sẽ được Khang ráp khi Trọng Sơn xong code)\n";
    cout << "0. Quay lai Menu chinh\n";
}
int Menu::getChoice() {
    int choice;
    cout << "Nhap lua chon cua ban: ";
    cin >> choice;
    return choice;
}