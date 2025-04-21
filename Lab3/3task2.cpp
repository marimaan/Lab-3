#include <iostream>
#include <string> //Include necessary libraries
using namespace std;

class Student { //For the 1st part of the task I will create classes and access specifiers
private:
    string name;
    int age;
    char grade;
    string group = "2025 group";

public:
    // Setters
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setGrade(char g) {
        grade = g;
    }

    // Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    char getGrade() {
        return grade;
    }

    // Display Info
    void displayInfo() {
        cout << "\nStudent Info:" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << group << endl;
    }
};

int main() {
    Student student;

    string inputName;
    int inputAge;
    char inputGrade;

    // Ask for user input
    cout << "Enter your name: ";
    getline(cin, inputName);

    cout << "Enter your age: ";
    cin >> inputAge;

    cout << "Enter your grade (A-F): ";
    cin >> inputGrade;

    // Assign values using setters
    student.setName(inputName);
    student.setAge(inputAge);
    student.setGrade(inputGrade);

    // Show student info
    student.displayInfo();

    return 0;
}
