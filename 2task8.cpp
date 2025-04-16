#include <iostream> 
using namespace std;

int main(){
    //Initial integer value and reference
    int integer;
    int& reference = integer;

    //User giving the number 
    cout<<"Enter a number: ";
    cin>>integer;

    cout<<"\nYour value is "<<integer;
    cout<<". \nPointer is a reference to this number.";
    cout<<"\nLet's change the reference by adding 10."<<endl;

    //Modifying the reference and printing the result
    reference=integer+10;

    cout<<"\nThe new value for the reference is: "<<reference<<endl;
    cout<<"The new value for the original number is: "<<integer<<endl;

    return 0;
}