#include <iostream>
#include <string> //necessary libraries
using namespace std;

//Creating a class
class Vehicle{
    //Protected class
    protected:
    string brand;
    int year;

    //Public class
    public:
    Vehicle(string b, int y) : brand(b), year(y){};
    virtual ~Vehicle(){}

    //Adding virtual lets these functions be overridden in future classes, which enables polymorphism
    virtual void showInfo(){
        cout<<"Brand: "<<brand<<".\nYear: "<<year<<"."<<endl;
    }

    virtual void startEngine(){
        cout<<"Starting engine of Vehicle.\n"<<endl;
    }
};

//Including vehicle class
class Car : public Vehicle{
    //Private value
    private:
    int numDoors;

    //Public value
    public:

    //The getter and setter are needed to access and use the private numDoors variable in this class and others
    void setnumDoors(int nD){
        numDoors = nD;
    }
    
    int getnumDoors() const{
        return numDoors;
    }

    //Parameterized constructor
    Car(string b, int y, int nD) : Vehicle(b, y), numDoors(nD){}
    
    void showInfo() override{
        cout<<"Brand: "<<brand<<".\nYear: "<<year;
        cout<<".\nNumber of doors: "<<getnumDoors()<<"."<<endl;
    }

    void startEngine() override{
        cout<<"Car engine is starting!\n"<<endl;
    }
};

//Creating ElectricCar class
class ElectricCar : public Car{

    //Private member
    private:
    int batteryCapacity;

    //Public members
    public:

    //If no value is given, this constructor sets it to 0. The Car constructor is shown as a reference.
    ElectricCar() : Car("", 0, 0), batteryCapacity(0){}

    //Parameterized constructor
    ElectricCar(string b, int y, int nD, int bC) : Car(b, y, nD), batteryCapacity(bC){}
    void showInfo() override{
        cout<<"Brand: "<<brand<<".\nYear: "<<year;
        cout<<".\nNumber of doors: "<<getnumDoors();
        cout<<".\nBattery capacity: "<<batteryCapacity<<" kWh."<<endl;
    }
    
    //startEngine function
    void startEngine() override{
        cout<<"Electric engine is starting...Silent but powerful!\n"<<endl;
    }
};

int main(){
    //Object creation
    Vehicle* myVehicle = new Vehicle("Generic", 2015);
    Car* myCar = new Car("Toyota", 2021, 4);
    ElectricCar* myElectric1 = new ElectricCar("Tesla", 2023, 4, 75);
    ElectricCar* myElectric2 = new ElectricCar("Nissan", 2022, 4, 40);

    // Call showInfo and startEngine for each type of vehicle
   // Demonstrates polymorphism by calling the appropriate version of each function
    myVehicle -> showInfo();
    myVehicle -> startEngine();

    myCar -> showInfo();
    myCar -> startEngine();

    myElectric1 -> showInfo();
    myElectric1 -> startEngine();

    myElectric2 -> showInfo();
    myElectric2 -> startEngine();

    //Delete function
    delete myVehicle;
    delete myCar;
    delete myElectric1;
    delete myElectric2;

    return 0;
}