//(2) Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to 
//find the maximum value among these integers. The function definition itself 
//should also use pointer for comparison.

#include <iostream>
using namespace std;

int max(int* p, int size) {
    int maxnum = *p;
	
    for (int i = 1; i < size; i++) {
        if (*(p + i) > maxnum) {
            maxnum = *(p + i);
        }
    }
    return maxnum;
}

int main() {
    int a[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int (*maxFunctionPtr)(int*, int) = &max;

    int maximum = (*maxFunctionPtr)(a, n);
    cout << "Maximum number: " << maximum << endl;

    return 0;
}

