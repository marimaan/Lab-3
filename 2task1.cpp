#include <iostream> 
#include "multiply1.h" //I created this library with necessary operations
using namespace std;


//Based on user input, the main function will show the result of each function
int main(){
    int num1, num2, num3, intresult;
    double num4, num5, num6, doubleresult, doubleresult2;

    //The first part of the task
    cout<<"Let's multiply two integers. \nPlease type in a number: ";
    cin>>num1;

    cout<<"Type the second number: ";
    cin>>num2;

    intresult = Multiply(num1, num2);

    cout<<"The product of the two integers is: "<<intresult<<endl;

    //The second part of the task
    cout<<"\nSecond part is to multiply two doubles. Give a double number: ";
    cin>>num4;

    cout<<"Type one more double: ";
    cin>>num5;

    doubleresult = Multiply(num4, num5);

    cout<<"The result of the two doubles multiplied is: "<<doubleresult<<endl;

    //The third part of the task
    cout<<"\nLet's see what happens if there is a true or false flag.";
    cout<<" Please type in an integer: ";
    cin>>num3;

    cout<<"Type in a double: ";
    cin>>num6;
    
    //The third part includes the false flag
    doubleresult2 = Multiply(num3, num6, false);
    
    cout<<"The result of the two numbers multiplied together is";
    cout<<" false flag (normal result): "<<doubleresult2<<endl;

    //The third part with true flag
    doubleresult2 = Multiply(num3, num6, true);

    cout<<"And this is the same result with a true flag: ";
    cout<<doubleresult2<<endl;

    return 0;
}