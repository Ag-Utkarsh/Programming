/*Write a program which takes the values of length and breadth from user and check if it is
a square or not.*/
// Sample Input: Enter length and breadth of quadilateral: 5 5
// Sample Output: The qualidateral is square
// Sample Input: Enter length and breadth of quadilateral: 5 6
// Sample Output: The qualidateral is not square
#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length and breadth of quadilateral"<<endl;
    cin>>length>>breadth;
    if(length==breadth)
       cout<<"The qualidateral is square"<<endl;
    else
       cout<<"The qualidateral is not square"<<endl;
    return 0;      
}
// PROGRAM DOCUMENTATION
// This program takes the values of length and breadth of a quadilateral as 
// input from the user and checks if it is a square or not.
// The program uses the if-else statement to check if the length 
// is equal to the breadth or not.
// If the length is equal to the breadth, the program prints that 
// the quadilateral is a square.
// If the length is not equal to the breadth, the program prints that
// the quadilateral is not a square.