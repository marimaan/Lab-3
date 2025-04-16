#include <iostream>
using namespace std;

int main() {
    int x;       //Create an integer 
    int* p1 = &x;      // Pointer p1 points to x
    int* p2 = p1;      // Pointer p2 points to the same address as p1

    //Asking for user input
    cout <<"Type in the number: ";
    cin>>x;
    cout <<"The first pointer p1 has intial value of "<<x;
    cout <<"\nThe second pointer p2 has value of p1.";
    cout <<"\nLet's multiply p1 by 2"<<endl;

    *p1=x*2;

    cout<< "\nThis is the result of p1:"<<*p1;
    cout<< "\nThis is the value of ps:"<<*p2;
    cout<< "\nThe value of initial value:"<<x <<endl;
   
    return 0;
}
