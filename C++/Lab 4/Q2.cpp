//(2) Create a constructor to initiate any private data member. 
//Later overload it to set different type of data member. Your program must also include a destructor.

#include <iostream>
using namespace std;

class Example {
private:
    int intValue;
    double doubleValue;

public:
    // Constructor with integer value
    Example(int value) {
        intValue = value;
        doubleValue = 0.0;  // Default value for double
        cout << "Integer constructor called." << endl;
    }

    // Overloaded constructor with double value
    Example(double value) {
        intValue = 0;       // Default value for int
        doubleValue = value;
        cout << "Double constructor called." << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called." << endl;
    }

    void display() {
        cout << "Integer value: " << intValue << ", Double value: " << doubleValue << endl;
    }
};

int main() {
    Example obj1(45);       // Calls the integer constructor
    Example obj2(3.14);     // Calls the double constructor
    
    obj1.display();
    obj2.display();
    
    // Destructor for each object will be automatically called when they go out of scope

    return 0;
}

