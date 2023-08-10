//(1) Write a program in C++ for addition and subtraction of two complex numbers. 
//Show the values of the original number as well as sum and difference. [Use class]

#include <iostream>
using namespace std;

class complex {
private:
    double real, imaginary;

public:
    complex(double re, double im) {
        real = re;
        imaginary = im;
    }
    
    complex add(complex num) {
        double sumReal = real + num.real;
        double sumImaginary = imaginary + num.imaginary;
        return complex(sumReal, sumImaginary);
    }
    
    complex subtract(complex num) {
        double diffReal = real - num.real;
        double diffImaginary = imaginary - num.imaginary;
        return complex(diffReal, diffImaginary);
    }
    
    void display() {
        cout << "complex number: " << real << "+" << imaginary << "i" << endl;
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;
    cout << "Enter real and imaginary parts of first complex no:" << endl;
    
    cin >> real1 >> imaginary1;
    cout << "Enter real and imaginary parts of second complex no:" << endl;
    
	cin >> real2 >> imaginary2;
    
    complex num1(real1, imaginary1);
    complex num2(real2, imaginary2);
    
    complex sum = num1.add(num2);
    complex diff = num1.subtract(num2);
    
    cout << "Original numbers: " << endl;
    num1.display();
    num2.display();
    
    cout << "Sum: " << endl;
    sum.display();
    
    cout << "Difference: " << endl;
    diff.display();
    
    return 0;
}

