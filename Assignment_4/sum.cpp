/*Write a program to find the sum of n natural numbers.*/
// Sample Input: Enter a number: 5
// Sample Output: Sum of 5 natural numbers are: 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    cout<<"Sum of "<<n<<" natural numbers are: "<<sum;
    return 0;     
}
// PROGRAM DOCUMENTATION
// Program Description: This program finds the sum of n natural numbers.
// FOR LOOP: The for loop is used to iterate through the numbers from 1 to n.
// IF STATEMENT: The if statement is used to check if the sum of the cube of the digits of the number is equal to the number itself.
// Test Case 1: Enter a number: 5
// Sample Output: Sum of 5 natural numbers are: 15
// Test Case 2: Enter a number: 10
// Sample Output: Sum of 10 natural numbers are: 55
// Test Case 3: Enter a number: 15
// Sample Output: Sum of 15 natural numbers are: 120
