// (1)Create a function template to swap 2 values. Using its template function, swap 2 integer,
// floating point, and character values.

#include <iostream>
using namespace std;
template<class T1, class T2, class T3>
void exchange(T1 *a, T2 *b, T3 c){
c=*a;
*a=*b;
*b=c;
}

int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout <<"Enter two integer values   :: ";
    cin  >>i1>>i2;
    cout <<"Enter two float values     :: ";
    cin  >>f1>>f2;
    cout <<"Enter two character values :: ";
    cin  >>c1>>c2;
    cout <<endl<<"Before Swap : "<<endl;
    cout <<"Integers       :  "<<i1<<"\t"<<i2<<endl;
    exchange(&i1,&i2,0);
    cout <<"Floating point :  "<<f1<<"\t"<<f2<<endl;
    exchange(&f1,&f2,0.0);
    cout <<"Characters     :  "<<c1<<"\t"<<c2<<endl;
    exchange(&c1,&c2,'0');
    cout <<endl<<"After Swap : "<<endl;
    cout <<"Integers       :  "<<i1<<"\t"<<i2<<endl;
    cout <<"Floating point :  "<<f1<<"\t"<<f2<<endl;
    cout <<"Characters     :  "<<c1<<"\t"<<c2<<endl;
    return 0;
}
