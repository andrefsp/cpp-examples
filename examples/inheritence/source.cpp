#include <iostream>

using namespace std;


class Vehicle {
    public:
        string color;

    public: 
        Vehicle(string color) {
            this->color = color;
        }
};


class Car: public Vehicle {
    public:
        string brand;

    public:
        Car(string color, string brand): Vehicle(color) {
            this->brand = brand;
        }
};


/*
Vehicle::Vehicle(string color) {
    this->color = color;
}


Car::Car(string color, string brand): Vehicle(color) {
    this->color = color;
    this->brand = brand;
};
*/


int main() {
    
    Vehicle abstractVehicle("red"); 
    Car car("red", "nissan");
 
    cout << "Abstract Vehicle color: " << abstractVehicle.color << endl;
    cout << "Car color is a " << car.color << " " << car.brand << endl;

    return 0;
}
