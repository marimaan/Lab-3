#include <iostream> 
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,12,14,16}; //Initial array

   //The following calculations set the size of array 2 to match the size of the original array
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size];
    int* ptr = arr; //Pointer integer to the original array
    cout<<"This is the original array: ";
    
    for (int i=0; i<size; i++){  //This for-loop prints each element in the original array
        cout<<*(ptr+i)<<" ";
    }

    // The second for loop copies elements from array 1 into the new array in reverse order
    for(int i=0; i<size; i++){
        arr2[size-1-i]=*(ptr+i);
    }

    cout<<"\nThis is the new array: ";
    for(int i=0; i<size; i++){ //Printing the new array elements
        cout<<arr2[i]<<" ";
    }
    return 0;
}