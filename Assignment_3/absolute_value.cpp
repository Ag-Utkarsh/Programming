//Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0)
       cout<<"Absolute value of "<<num<<" is: "<<-num;
    else
       cout<<"Absolute value of "<<num<<" is: "<<num;
    return 0;      
}