#pragma once
class Menu {
public:
    static void displayMainMenu();
    static void displayStudentMenu();
    static void displayLecturerMenu();
    static void displayCourseMenu();
    static int getChoice();
};