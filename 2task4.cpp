#include <iostream> 
using namespace std;

//Main function
int main(){
    int num;
    cout<<"Hello! I will help you to square your number\n";
    cout<<"Your number has to be greater than 0.\n"<<endl;

    //Continuous While loop with break and continue conditions
    while (true){
        cout<<"Give me the number: ";
        cin>>num;
    
        if (num<0){
            cout<<"Invalid choice. Exiting the program.\n"<<endl;
            break;
        }

        else if (num==0){
            cout<<"Your number needs to be greater than 0.\n"<<endl;
            continue;
        }

        else{
            int SQUARE = num*num;
            cout<<"The square of the number is: "<<SQUARE<<"\n"<<endl;
        }

    }
    return 0;
}