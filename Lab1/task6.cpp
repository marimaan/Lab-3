#include <iostream>

int main() {
    int num, reversedNum = 0;

    // Ask user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Reverse the digits using a for loop
    for (; num > 0; num /= 10) {
        reversedNum = reversedNum * 10 + (num % 10);
    }

    // Display the reversed number
    std::cout << "Reversed Number: " << reversedNum << std::endl;

    return 0;
}