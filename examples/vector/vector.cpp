#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    string text = "this is some text";
    int myVar = 1;
    
    vector<int> myVector = {10, 20, 30};


    cout << "Hello world!" << endl;
    cout << myVar << endl;
    cout << text << endl;
   
    cout << myVector.size() << endl;
    
    for (int n : myVector)
        cout << n << endl;

    return 0;
}
