//(1) Create a function that calculates the product of 3 numbers entered by the user,
// regardless of the number entered being integer or floating point. Print the result as output.

#include <iostream>
using namespace std;


double prod(double num1, double num2, double num3) {
    return num1 * num2 * num3;
}

int main() {
    double num1, num2, num3;
    
    
    cout << "Enter three number: ";
    cin >> num1 >> num2 >> num3;
    
    double output = prod(num1, num2, num3);
    cout << "The product is: " << output << endl;
    
    return 0;
}
