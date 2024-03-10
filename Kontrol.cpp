#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <windows.h>

struct StudentGrade {
    std::string name;
    std::vector<int> grades;
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::map<std::string, StudentGrade> studentGrades; 

    
    studentGrades["Петя"].grades.push_back(5);
    studentGrades["Вася"].grades.push_back(3);
    studentGrades["Таня"].grades.push_back(4);

    
    for (const auto& pair : studentGrades) {
        std::cout << "Имя студента: " << pair.first << ", Оценки: ";
        for (int grade : pair.second.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }
        
    std::string studentName;
    int grade;
    std::cout << "Введите имя студента: ";
    std::cin >> studentName;

    if (studentGrades.find(studentName) != studentGrades.end()) {
        std::cout << "Введите оценку для студента по имени " << studentName << ": ";
        std::cin >> grade;
        studentGrades[studentName].grades.push_back(grade); 
    }
    else {
        std::cout << "Нет такого студента в списке." << std::endl;
    }

    for (const auto& pair : studentGrades) {
        std::cout << "Имя студента: " << pair.first << ", Оценки: ";
        for (int grade : pair.second.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}