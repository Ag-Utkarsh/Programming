//Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
    cout<<"Difference of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
    cout<<"Product of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
    cout<<"Division of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
    return 0;    
}