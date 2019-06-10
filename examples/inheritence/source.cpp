#include <iostream>


using namespace std;


// Vehicle main class   =============================
class Vehicle {
    public:
        string color;
        virtual string Ima(void) { return ""; };

    Vehicle(string color);
};

Vehicle::Vehicle(string color) {
    this->color = color;
}


// Car class    =====================================
class Car: public Vehicle {
    public:
        string brand;
        string Ima(void);

    Car(string color, string brand);
};

Car::Car(string color, string brand): Vehicle(color) {
    this->brand = brand;
};

string Car::Ima(void) {
    return "I'm a car!";
}

// Truck    =========================================
class Truck: public Vehicle {
    public:
        string brand;
        string Ima(void);

    Truck(string color, string brand);
};

Truck::Truck(string color, string brand): Vehicle(color) {
    this->brand = brand;
}

string Truck::Ima(void) {
    return "I'm a truck!";
}

// main     =========================================
int main() {
    
    Vehicle abstractVehicle("red"); 
    Car car("red", "nissan");
    Truck truck("green", "scania");

    cout << "Abstract Vehicle color: " << abstractVehicle.color << endl;
    cout << "The `car` is a " << car.color << " " << car.brand << endl;
    cout << "The `truck` is a " << truck.color <<  " " << truck.brand << endl;

    cout << "===================" << endl;

    cout << "Truck says:    " << truck.Ima() << endl;
    cout << "Car says:      " << car.Ima() << endl;

    return 0;
}
