#include <iostream>
using namespace std;

#define UPPER_LIMIT 50  // MACRO for the upper limit

int main() {
    // Loop to print even numbers from 1 to 50
    for (unsigned char i = 2; i <= UPPER_LIMIT; i += 2) {
        cout << static_cast<int>(i) << " ";  // Cast to int for correct display
    }

    return 0;
}