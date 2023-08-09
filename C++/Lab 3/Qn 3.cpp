//(3) Create a class for an account holder with data members as account_no, account_holder_name and balance. 
//Create two methods to store and retrieve these values of 3 customers.

#include <iostream>
using namespace std;

class AccountHolder {
	private:
		int account_no;
		char account_holder_name[50];
		float balance;

	public:
		void setData(AccountHolder obj) {
			
			cout << endl << endl;
			cout << "Enter Account number: ";
			cin >> account_no;
			
			cout << "Enter Account Holder's name: ";
			cin >> account_holder_name;
			
			cout << "Enter Balance in account: ";
			cin >> balance ;
		}
		
		void getData(AccountHolder obj){
			
			cout << endl << endl;
			
			cout << "Account Number: " << obj.account_no << endl;
			
			cout << "Name: " << obj.account_holder_name << endl;
			
			cout << "Balance: " << obj.balance << endl << endl;
		}

};


int main() {
	AccountHolder obj1, obj2, obj3;
	obj1.setData(obj1);
	obj2.setData(obj2);
	obj3.setData(obj3);
	
	obj1.getData(obj1);
	obj1.getData(obj1);
	obj3.getData(obj3);
	
	return 0;
}
