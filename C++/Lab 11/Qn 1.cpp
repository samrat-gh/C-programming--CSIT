//(1) Write a program to demonstrate a catch block which catches all exceptions.

#include<iostream>
using namespace std;
int numerator,denominator;
void divide(){
	if(denominator==0){
		throw denominator;
	}
	cout<<"Quotient:"<<(float)numerator/denominator;
	}

int main(){

cout<<"Enter numerator:";
cin>>numerator;
cout<<"Enter denominator:";
cin>>denominator;
try{
	divide();	
}

catch(...){
	cout<<"Invalid Input, try again";
}
return 0;
}
