//(2) Modify the program of question 1 to display only the names of the department heads.

#include <iostream>
using namespace std;

struct department {
	char departmentName[60];
	int employeeid;
	bool isHead;
	char employeeName[25];
};


struct Pharma {
	struct department depart[5];	
};


int main() {
	struct Pharma emp[3];
	int m = 1, n = 2, count = 0, k = 0;
	
	for(int i = 0; i < m; i++) {
		
		cout << "Enter Department name: ";
		cin >> emp[i].depart[k].departmentName; 
		
		for(int j = 0; j < n; j++){	
		cout << "Enter Employee Id: ";
		cin >> emp[i].depart[j].employeeid;
		
		if(count == 0) {
		cout << "Enter Employee isHead or not ( 1 or 0): ";
		cin >> emp[i].depart[j].isHead; }
		 else {
		emp[i].depart[j].isHead = 0;	}

		cout << "Enter Employee name: ";
		cin >> emp[i].depart[j].employeeName; 
		
		if(emp[i].depart[j].isHead == 1) {
		count = 1;	
		cout << "Department Head Set, Repeat Input to alter" << endl << endl; }		
		cout << endl;		}
		
	count = 0;
	k++;
	cout << endl;
}
		k = 0;
	for(int i = 0; i < m; i++) {
		
		cout << "Department Name: " << emp[i].depart[k].departmentName << endl << endl; 
		
		for(int j = 0; j < n; j++){
			
//	cout << "Employee Head: "<< emp[i].depart[j].isHead << endl;		

		if(emp[i].depart[j].isHead) {
				
		cout << "The Employee Head is: " << endl;		
				
		cout << "Employee Id: "<< emp[i].depart[j].employeeid << endl;
		cout << "Employee Name: " << emp[i].depart[j].employeeName << endl << endl; 
			}
	
		}
	cout << endl <<  endl;
	k++;
	}	
	
		
	return 0;
}

