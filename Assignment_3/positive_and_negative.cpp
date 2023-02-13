/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number: ";
    cin>>num;
    if(num>=0)
      cout<<"The number is: "<<num<<endl;
    else
      cout<<"The number is negative and it is skipped";
    return 0;    
}