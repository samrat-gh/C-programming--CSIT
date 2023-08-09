//(2) Write a program to output the nth Fibonacci number using iteration.

#include <iostream>
using namespace std;

int main() {
	int n, a = 0, b = 1, i, temp;
	//	0 1 1 2 3 5 8 13 21 34
	
	cout<<"Enter the nth term: ";
	cin>>n;
	cout << a << '\t' << b <<'\t';
	for(i = 2; i<n; i++){
		cout << a + b << '\t';
		temp = a;
		a = b;
		b = b + temp;
	}
	
	return 0;
}


