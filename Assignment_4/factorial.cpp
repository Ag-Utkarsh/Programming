/*Write a program to calculate the factorial of a number.*/
// Sample Input: Enter a number: 5
// Sample Output: Factorial of 5 is: 120
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int f=1;
    if(num==0)
       f=1;
    else{  
        for(int i=1;i<=num;i++)
        f*=i;
    }
    cout<<"Factorial of "<<num<<" is: "<<f<<endl;
    return 0;
}
// PROGRAM DOCUMENTATION
// Program Description: This program calculates the factorial of a number.
// IF loop: The if loop is used to check if the number is 0.
// Factorial of 0 is 1.
// esle: The else loop is used to calculate the factorial of the number.
// FOR LOOP: The for loop is used to iterate through the numbers from 1 to num.
// Test Case 1: Enter a number: 5
// Sample Output: Factorial of 5 is: 120
// Test Case 2: Enter a number: 10
// Sample Output: Factorial of 10 is: 3628800