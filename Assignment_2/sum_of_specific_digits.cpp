//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
// Sample Input: Enter a 5 digit number: 12345
// Sample Output: Sum of first and second last digit is: 6
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
// PROGRAM DOCUMENTATION
// This program takes a 5 digit number as input from the user and 
// calculates the sum of the first and the second last digit of the number.
// The program uses the division operator (/) to get the first digit of the 
// number and the modulus operator (%) to get the second last digit of the number.
// The program outputs the sum of the first and the second last digit of the number.