/* Write a C++ program to swap two numbers with the help of a third variable. 
Sample Input : 2, 3
Sample Output : 3, 2*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"Before swapping"<<endl;
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    int swap=x;
    x=y;
    y=swap;
    cout<<"After swapping"<<endl;
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    return 0;
}
/* PROGRAM DOCUMENTATION*/
/* 
 * This program swaps the values of two numbers.
 *
 * The program prompts the user to enter two numbers.
 * It then swaps the values of the numbers.
 * The result is displayed on the screen.
 */