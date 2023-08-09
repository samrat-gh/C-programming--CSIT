//(1) There is a vacancy for a seasonal job. Applicants are qualified to apply for the job only if 
//they can lift at least 50 kg weight and are between 18 to 24 yrs of age. However, if the applicants 
//have more than 4 yrs of experience in the field, they can qualify even if they can lift just 35 kg and 
//are over 24 yrs of age. Write a program in C++ to input the information of applicants and check if they 
//meet the required credentials for the job. 


#include <iostream>
using namespace std;

int main() {
    int weight;
    float age, exp;

    cout << "Enter Details" << endl;
    cout << "Enter your least weight lifting capacity, age, and work experience in years: ";
    
    cin >> weight >> age >> exp;
	cout << endl;
	if(age > 18) {
		if(age > 24 && exp > 4 && weight >= 35){
			cout<<"You are eligible for job ";
		}
		else if (age < 24 && weight > 50) {
			cout<<"You are eligible for job";
		}
		
		else{
			cout<<"You are not eligible";
		}
	}

    return 0;
}




