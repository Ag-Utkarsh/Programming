//Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
/*Sample Input : 8 10
Sample Output :  Sum = 18
Difference = -2
Product = 80
Division = 0.8*/
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
// PROGRAM DOCUMENTATION
// This program takes two integer inputs from the user and performs basic arithmetic operations on them.
// The program uses the addition operator (+) to add the two numbers, the subtraction operator (-) to
// subtract the two numbers, the multiplication operator (*) to multiply the two numbers,  and the
// division operator (/) to divide the two numbers. The program outputs the sum, difference, product,
// and division of the two numbers.
