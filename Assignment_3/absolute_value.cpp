//Write a program to print absolute value of a number entered by the user.
// Sample Input: Enter a number: -5
// Sample Output: Absolute value of -5 is: 5
// Sample Input: Enter a number: 5
// Sample Output: Absolute value of 5 is: 5
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
// PROGRAM DOCUMENTATION
// This program takes a number as input from the user and prints the absolute value of the number.
// The program uses the if-else statement to check if the number is negative or not.
// If the number is negative, the program prints the absolute value of the number.
// If the number is positive, the program prints the absolute value of the number.
// The program uses the multiplication operator (*) to multiply the number by -1 
//to get the absolute value of the number.
// The program outputs the absolute value of the number.
