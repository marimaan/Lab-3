#include <iostream> //Header inclusion
using namespace std;

int main(){
    
    //Parameters for the code
    float num1, num2, result;
    char operation;

    //Introduction
    cout<<"Hellol! I am your small calculator."<<endl;
    cout<<"I can do simple math operations:\n+ Addition.\n- Subtraction."<<endl;
    cout<<"* Multiplication.\n/ Division."<<endl;

    //Do-While loop allows for continuous input
    do{
        cout<<"\nGive me the first number: ";
        cin>>num1;

        cout<<"Now type the second number: ";
        cin>>num2;

        cout<<"Choose the operation for your numbers: ";
        cin>>operation;

        //Use a switch statement to handle different operation types, with a default case to exit the program
        switch(operation){
            case '+': {
                result = num1 + num2;
                cout<<"Here is the addition answer. Number "<<num1<<" plus number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            case '-':{
                result = num1 - num2;
                cout<<"Here is the subtraction answer. Number "<<num1<<" minus number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            case '*':{
                result = num1 * num2;
                cout<<"Here is the multiplication answer. Number "<<num1<<" multiplied by";
                cout<<" number "<<num2<<" is equal to: "<<result<<endl;
                break;
            }
            case '/':{
                result = num1 / num2;
                cout<<"Here is the division answer. Number "<<num1<<" divided by number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice. Exiting the program";
                break;
            }
        }
    }

    while(operation=='+'||operation=='-'||operation=='*'||operation=='/');

    return 0;
}