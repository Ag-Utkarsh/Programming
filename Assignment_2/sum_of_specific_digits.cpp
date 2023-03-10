//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 5 digit number: ";
    cin>>num;
    int sum = num/10000+(num/10)%10;
    cout<<"Sum of first and second last digit is: "<<sum;
    return 0;    
}