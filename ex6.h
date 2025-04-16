#ifndef EX6_H
#define EX6_H
#include <iostream>
using namespace std;

//Task structure from the task description
struct Student{
    char name[50];
    int id;
    float grade;
};

//Lets create a function to add students
void AddStudent(Student students[], int &count){
    if(count>10){
        cout << "You have reached the maximum number of students." << endl;
    }

    else{
        cout << "Write the student name: ";
        cin >> students[count].name;

        cout << "Enter the ID: ";
        cin >> students[count].id;

        cout << "Enter the grade: ";
        cin >> students[count].grade;

        cout << "Student added successfully!" << endl;

        count++;
    }
}

//Function to display student data
void DisplayStudents(Student students[], int count){
    
    if(count==0){
        cout<<"No students have been added to display yet."<<endl;
    }
   
    else{
        for(int i=0; i<count; i++){
        cout<<"Student name: "<<students[i].name;
        cout<<", ID: " <<students[i].id;
        cout<<", Grade: " <<students[i].grade <<endl;
        }
    }
}

//Studet searching function based on ID
void SearchStudent(Student students[], int count){
    int sID;

    if(count==0){
        cout<<"Empty file. There are no students available for search."<<endl;
    }

    else{
        cout<<"Enter the student's ID that you are searching for: ";
        cin>>sID;
        for(int i=0; i<count; i++){
            if(sID==students[i].id){
            cout<<"The student with this ID is: ";
            cout<<students[i].name<<", ID: "<<students[i].id;
            cout<<", Grade: "<<students[i].grade <<endl;
            }
        }
    }
}

#endif