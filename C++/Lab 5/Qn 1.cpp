// (1) Write a program to simulate banking transaction of 3 users. The program must be menu driven.
// Include the following operations in the menu:
//1. Deposit 
//2. Withdraw
//3. Display Balance
//4. Display Total Operations
//5. Exit
//Use a static member function to display total number of operations (option 4) performed through the application. 

#include <iostream>
using namespace std;

class Bank {
	private:
		
	string account_name;
	int account_no;
	float balance;
	static int operations;
	
	public:
		void setData() {
			cout << "Enter account name: ";
			cin.ignore();
			getline(cin, account_name);
			
			cout << "Enter account no: ";
			cin >> account_no;
			
			cout << "Enter balance: ";
			cin >> balance;
			
			cout << endl;
			
		}
		
		void getData() {
			cout << "Account Name: " << account_name;
			cout << "Account Number: " << account_no;
			cout << "Balance: " << balance;
		}
		
		static void showOperations() {
			cout << endl << "Total number of operations = " << operations;
		}
		
		void deposit(){
			float amt;
			cout << endl << "Enter deposit amount: ";
			cin >> amt;
			balance += amt;
			operations++;
		}

		void withdraw() {
			float amt;
			cout << endl << "Enter Withdraw amount: ";
			cin >> amt;
			
			if(amt > balance) {
				cout << "Insufficient Balance! ";
			}
			else {
				balance -= amt;
				operations++;
			}
		} 	
		
		void showBalance() {
			cout << account_name << "has" << "Balance: " << balance << endl;
		}
};

int Bank::operations;

int main() {

		int i, j, oper;
		Bank acc[3];
		cout << "Enter information of 3 accounts: " << endl;
		for(int i = 0; i < 3; i++) {
			acc[i].setData();
		}
		
		cout << "Operation Code: " << endl;
		cout << "1. Deposit" << endl << "2. Withdraw" << endl
		 << "3. Display Balance" << endl << "4. Display Total Operations" << endl <<  "5. Exit" ; 
		
		do {
			
		cout << endl << "Enter Operation: ";	
		cin >> oper ;
			
		switch (oper) {
			case (1): {
				for (int i = 0; i < 3; i++) {
				acc[i].deposit();
		}
			break;
	}
			case (2): {
		   
		   for(int i = 0; i < 3; i++) {
			acc[i].withdraw();
		}
			break;
			}
			
			case (3): {
			
			for(int i = 0; i < 3; i++) {
			acc[i].showBalance();
		} 
		break;
		}
		
		case (4): {
			acc[i].showOperations();
			break; }
		
		case(5): {
			exit(0);
		break;		
		}	
				
		} 
	} while(oper != 5);
		
	
		
		
	return 0;
}
