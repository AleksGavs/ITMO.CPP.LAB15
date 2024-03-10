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

    
    studentGrades["����"].grades.push_back(5);
    studentGrades["����"].grades.push_back(3);
    studentGrades["����"].grades.push_back(4);

    
    for (const auto& pair : studentGrades) {
        std::cout << "��� ��������: " << pair.first << ", ������: ";
        for (int grade : pair.second.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }
        
    std::string studentName;
    int grade;
    std::cout << "������� ��� ��������: ";
    std::cin >> studentName;

    if (studentGrades.find(studentName) != studentGrades.end()) {
        std::cout << "������� ������ ��� �������� �� ����� " << studentName << ": ";
        std::cin >> grade;
        studentGrades[studentName].grades.push_back(grade); 
    }
    else {
        std::cout << "��� ������ �������� � ������." << std::endl;
    }

    for (const auto& pair : studentGrades) {
        std::cout << "��� ��������: " << pair.first << ", ������: ";
        for (int grade : pair.second.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}