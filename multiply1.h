#ifndef MULTIPLY1_H
#define MULTIPLY1_H

#include <iostream>
#include <cmath>
using namespace std;

//a function multiply that takes two integers as parameters and returns their product
int Multiply(int a, int b){
    return a * b;
}

//the function multiply that takes two doubles
double Multiply(double a, double b){
    return a * b;
}

//the function multiply that take 3 inputs including one integer, one double, and one flag value
double Multiply(int a, double b, bool flag){
    double result = a * b;

    if(!flag){
       return result;
    }
    
    else{
        return ceil(result);
    }
}

#endif