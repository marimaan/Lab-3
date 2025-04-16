#ifndef SWAP2_H
#define SWAP2_H

#include <iostream>
using namespace std;

//Simple swap function without pointer or references
void Swap(float a, float b){
    float c;
    c=a;
    a=b;
    b=c;

    cout<<"\nAfter the first swap, \nthe new first number is: "<<a;
    cout<<". And the second number is: "<<b<<endl;
}

//Swap function using pointers 
void SwapUsingPointers(float* a, float* b){
    float c=*a;
    *a=*b;
    *b=c;

    cout<<"\nAfter a swap with pointers, this is the new first number: "<<*a;
    cout<<". And the second number is: "<<*b<<endl;

    cout<<"Inside the code the values are restored to their original version, ";
    cout<<"so the next swap can be performed successfully."<<endl;

    /*Numbers are reuturned to their original value so that next function
    is unaffected */
    c=*b;
    *b=*a;
    *a=c;
}

//Swap function with references
void SwapUsingReferences(float &a, float &b){
    float c=a;
    a=b;
    b=c;

    cout<<"\nAfter a swap with references, this is the new first number: "<<a;
    cout<<". And the second number is: "<<b<<endl;
}

#endif
