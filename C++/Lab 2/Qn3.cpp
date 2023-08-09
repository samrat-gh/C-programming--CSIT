//(3) Write a program to find the sum of 1 - (22/2!) + (32/3!) - (42/4!) + (52/5!) - ..... (n2/n!).
// [Use recursion for the factorial part].


#include <iostream>
using namespace std;

double factorial(int n) {
    if (n == 0) 
        return 1;
    else 
        return n * factorial(n - 1);
}

double series(int n) {
    double sum = 1;
    
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (i * i) / factorial(i);
        } else {
            sum += (i * i) / factorial(i);
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The sum of the series is: " << series(n);
    return 0;
}

