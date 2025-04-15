#include <iostream> //Header inclusion
using namespace std;

int main(){
    
    //Parameters for the code
    float num1, num2, result;
    char operation;

    //Small introduction and instructions
    cout<<"Welcome to the Basic Operations page!\nHere, you will choose ";
    cout<<"which operations to perform using two numbers you inputted."<<endl;
    cout<<"Here is a list of operations:\n+ = Addition.\n- = Subtraction."<<endl;
    cout<<"* = Multiplication.\n/ = Division."<<endl;

    //Do-While loop allows for continuous input
    do{
        cout<<"\nPlease type in one number: ";
        cin>>num1;

        cout<<"Now type in another number: ";
        cin>>num2;

        cout<<"Finally, choose the operation you'd like to perform: ";
        cin>>operation;

        //Switch depending on the type of operation to perform with default case to exit
        switch(operation){
            case '+': {
                result = num1 + num2;
                cout<<"You chose addition. Number "<<num1<<" plus number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            case '-':{
                result = num1 - num2;
                cout<<"You chose subtraction. Number "<<num1<<" minus number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            case '*':{
                result = num1 * num2;
                cout<<"You chose multiplication. Number "<<num1<<" multiplied by";
                cout<<" number "<<num2<<" is equal to: "<<result<<endl;
                break;
            }
            case '/':{
                result = num1 / num2;
                cout<<"You chose division. Number "<<num1<<" divided by number "<<num2;
                cout<<" is equal to: "<<result<<endl;
                break;
            }
            default:{
                cout<<"Your choice is invalid. Exiting the program";
                break;
            }
        }
    }

    while(operation=='+'||operation=='-'||operation=='*'||operation=='/');

    return 0;
}