#include <iostream>
#include <string> //Include necessary libraries
using namespace std;

class Car { 
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) : brand(b), year(y) {
        cout << "Car " << brand << " from " << year << " created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << brand << " destroyed." << endl;
    }

    // Method to display car info
    void showInfo() {
        cout << "Car Brand: " << brand << "\nManufacturing Year: " << year << endl;
    }
};

int main() {
    // Create car object on the heap using new
    Car* mydreamCar = new Car("Porsche", 2022);

    // Call showInfo method
    mydreamCar->showInfo();

    // Delete the car object and call destructor
    delete mydreamCar;

    return 0;
}
