#include <iostream>


using namespace std;


class Animal {

    public:
        string name;
    
    Animal(string name);
};

Animal::Animal(string name) {
    this->name = name;
}

int main() {

    Animal dog("Alfie");

    cout << "Dog name is: " << dog.name << endl;

    return 0;
}
