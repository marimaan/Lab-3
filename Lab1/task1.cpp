// Include the necessary libraries
#include <iostream>
#include <string>

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

namespace TextOperations {
    std::string concat(std::string str1, std::string str2) {
        return str1 + " " + str2;
    }
}

int main() {
    int num1, num2;
    std::string word1, word2;  // Fix: Change to string

    std::cout << "Write the first number: ";
    std::cin >> num1;

    std::cout << "Write the second number: ";
    std::cin >> num2;

    std::cout << "Write the first word: ";
    std::cin >> word1;  // Fix: Now reads a string

    std::cout << "Write the second word: ";
    std::cin >> word2;  // Fix: Now reads a string

    // Let's use MathOperations first
    int sum = MathOperations::add(num1, num2);
    std::cout << "The sum of given numbers: " << sum << std::endl;

    // Let's use TextOperations next
    std::string combinedText = TextOperations::concat(word1, word2);  // Fix: Pass both words
    std::cout << "Concatenated words: " << combinedText << std::endl; // Improved output

    return 0;
}