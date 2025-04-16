#include <iostream> 
#include "library2.h"

using namespace std;

//Main function
int main(){
    float num1, num2;

    cout<<"Give the first number: ";
    cin>>num1;

    cout<<"Give the second number: ";
    cin>>num2;

    Swap(num1, num2);

    SwapUsingPointers(&num1, &num2);

    SwapUsingReferences(num1, num2);

    return 0;

}