//Write a program to check whether two numbers (entered by user) are equal or not.
/* Sample Input 1: 1, 2
Sample Output 1: Numbers are not equal
Sample Input 2: 2, 2
Sample Output 2: Numbers are equal */
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    if(x==y)
       cout<<"Numbers are equal"<<endl;
    else
       cout<<"Numbers are not equal"<<endl;
    return 0;     
}
//  PROGRAM DOCUMENTATION
//    This program takes two integer inputs from the user and checks if the two
//    numbers are equal. If the numbers are equal, then the program outputs
//    "Numbers are equal", otherwise, it outputs "Numbers are not equal".
//   The program uses the equality operator (==) to check if the two numbers are
//   equal. If the numbers are equal, then the program outputs "Numbers are
//   equal", otherwise, it outputs "Numbers are not equal".
