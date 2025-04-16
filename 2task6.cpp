#include <iostream> 
#include "ex6.h"
using namespace std;

//Main function
int main() {
    int option, count = 0;
    Student students[5];

    //Introductory message
        cout<<"Hello Teacher! This code will simplify your daily tasks.";
        cout<<"\nChoose the option from the list below:";
        cout<<"\n(1) Add a student.\n(2) Display student list.";
        cout<<"\n(3) Search for a student by ID.\n(4) Exit the program."<<endl;
   

    //With a do-while loop, actions are performed continuously
    do{
        cout<<"\nSelect your option: ";
        cin >> option;

        switch(option) {
            case 1:{
                AddStudent(students, count);
                break;
            }
            case 2:{
                DisplayStudents(students, count);
                break;
            }
            case 3:{
                SearchStudent(students, count);
                break;
            }
            case 4:{
                cout<<"Exiting the program.";
                break;
            }
            default:{
                cout << "Invalid option! Exiting the program." << endl;
                option = 4;
                break;
            }
        }
    }
    while(option!=4);

    return 0;
}