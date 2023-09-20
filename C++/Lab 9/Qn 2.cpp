//(2) Write an object oriented program to overload the Pointer-To-Member (->) operator.

#include <iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    void setvalue(){
    cout <<"Name : ";
    cin  >>name;
    cout <<"Age  : ";
    cin  >>age;
    }
    student* operator ->(){
    return this;
    }
    };
int main(){
    student s1,s2;
    cout <<"Enter Details of 2 Students : "<<endl;
    cout <<endl<<"First Student  : "<<endl;
    s1.setvalue();
    cout <<endl<<"Second Student : "<<endl;
    s2.setvalue();
    if(s1->age>s2->age)
        cout <<endl<<s1->name<<" is older."<<endl;
    else if(s1->age<s2->age)
        cout <<endl<<s2->name<<" is older."<<endl;
    else
        cout <<endl<<"Both have equal age."<<endl;
    return 0;
}
