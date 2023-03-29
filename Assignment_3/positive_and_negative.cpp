/*Write a program to print positive number entered by the user, if user enters a negative
number, it is skipped.*/
// Sample Input: Enter a number: -5
// Sample Output: The number is negative and it is skipped
// Sample Input: Enter a number: 5
// Sample Output: The number is: 5
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
// PROGRAM DOCUMENTATION
// This program takes a number as input from the user and prints the number if it is positive.
// The program uses the if-else statement to check if the number is positive or not.
// If the number is positive, the program prints the number.
// If the number is negative, the program prints a message that the number is negative and it is skipped.
// The program outputs the number if it is positive.