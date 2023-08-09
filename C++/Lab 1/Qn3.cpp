
//(3) Write a program that prompts a student to enter the marks they obtained in Object Oriented Programming. 
//Output the corresponding grade they obtained. (0-59 = F, 60-69 = D, 70-79 = C, 80-89 = B, 90-100 = A).

#include <iostream>
using namespace std;

int main() {
	float m;
	cout << "Enter your marks in OOP: ";
	cin >> m;
	
	if(m){
		if(m < 60) 
		cout << "You have Scored : F";
		
		else if(m >= 60 && m < 70) 
			cout << "You have Scored D";
		
		else if(m >= 70 && m < 80)
			cout << "You have scored C";
			
		else if(m >= 80 && m < 90)
			cout << "You have scored B";
		
		else if(m >= 90 && m <=100)
			cout << "You have scored A";
			
		else
			cout << "Wrong Input, Enter a valid number between 0 to 100";	
			
		}
		
		
	return 0;
	
}
