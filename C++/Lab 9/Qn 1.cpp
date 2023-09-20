//Write a program that overloads the binary arithmetic '/' operator using a friend function.

#include <iostream>
using namespace std;
int r;
class divide{
private:
    int a;
    float b;
public:
    void setvalue();
    void getvalue();
    friend divide operator /(divide,divide);
};
void divide::setvalue(){
cout <<"Integer :: ";
cin  >>a;
cout <<"Float   :: ";
cin  >>b;
}
void divide::getvalue(){
cout <<"Integer : "<<a<<"(Remainder : "<<r<<")"<<endl;
cout <<"Float   : "<<b<<endl;
}
divide operator /(divide o1, divide o2){
r=o1.a%o2.a;
divide o3;
o3.a=o1.a/o2.a;
o3.b=o1.b/o2.b;
return o3;
}
int main(){
    divide d1,d2,d3;
    cout <<"Enter first Values  :"<<endl;
    d1.setvalue();
    cout <<endl<<"Enter second Values :"<<endl;
    d2.setvalue();
    d3=d1/d2;
    cout <<endl<<"The division of first values by second values is : "<<endl;
    d3.getvalue();
    return 0;
}
