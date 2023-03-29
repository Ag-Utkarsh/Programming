//Write a program to calculate the sum of digits of a 3 digit number.
/* Sample Input: Enter a 3 digit number: 123
   Sample Output: Sum of digits of the 123 is: 6*/
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a 3 digit number: ";
    cin>>num;
    int m=num;
    while(num>0){
        sum+=num%10;
        num/= 10;
    }
    cout<<"Sum of digits of the "<<m<<" is: "<<sum;
    return 0;    
}
// PROGRAM DOCUMENTATION
// This program takes a 3 digit number as input from the user and calculates the sum of the digits of the number.
// The program uses the modulus operator (%) to get the last digit of the number and the division operator (/) to remove the last digit of the number.
// The program uses a while loop to calculate the sum of the digits of the number.
// The program outputs the sum of the digits of the number.
