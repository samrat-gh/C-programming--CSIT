//(2) Write a program to demonstrate a class template for any suitable situation of your choice.

#include <iostream>
using namespace std;
template <class C>
class calculation{
private:
    C x,y,z;
public:
C setvalue(){
cin >>x>>y>>z;
}
C display(){
cout <<"Three values : "<<x<<" "<<y<<" "<<z<<endl;
if ((x<y && y<z)||(x>y && y>z))
cout <<"Middle       : "<<y<<endl;
else if ((y<x && x<z)||(y>x && x>z))
cout <<"Middle       : "<<x<<endl;
if ((x<z && z<y)||(x>z && z>y))
cout <<"Middle       : "<<z<<endl;
}
};


int main(){
    calculation <int> c1;
    calculation <float> c2;
    cout<<"Enter three integers      :: ";
    c1.setvalue();
    cout<<"Enter three floats values :: ";
    c2.setvalue();
    cout <<endl<<"INTEGERS "<<endl;
    c1.display();
    cout <<endl<<"FLOAT "<<endl;
    c2.display();
    return 0;
}
