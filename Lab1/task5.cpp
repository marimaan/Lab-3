#include <iostream>

int main() {
    int num, sum = 0;
    
    // Ask user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Calculation of the sum using a for loop
    for (int temp = num; temp > 0; temp /= 10) {
        sum += temp % 10;
    }
    
    // Display the result
    std::cout << "The sum of the digits of " << num << " is " << sum << std::endl;
    
    return 0;
}