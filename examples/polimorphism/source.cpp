#include <iostream>

using namespace std;


// Vehicle main class   =============================
class Vehicle {
    public:
        virtual string Ima(void) { return ""; };

};

// Car class    =====================================
class Car: public Vehicle {
    public:
        string Ima(void);

};

string Car::Ima(void) {
    return "I'm a car!";
}

// Truck    =========================================
class Truck: public Vehicle {
    public:
        string Ima(void);
};

string Truck::Ima(void) {
    return "I'm a truck!";
}

// main     =========================================
int main() {

    Car car;
    Truck truck;

    Vehicle *rCar = &car;
    Vehicle *rTruck = &truck;

    cout << "--- Polimorphic calls --" << endl;
    cout << "Truck says:    " << rTruck->Ima() << endl;
    cout << "Car says:      " << rCar->Ima() << endl;

    return 0;
}
