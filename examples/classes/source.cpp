#include <iostream>


using namespace std;


class Dog {

    public:
        string name;
    
    Dog(string name);
};

Dog::Dog(string name) {
    this->name = name;
}

int main() {

    Dog dog("Alfie");

    cout << "Dog name is: " << dog.name << endl;

    return 0;
}
