/* - Write a program to take the values of two variables a and b from the keyboard and then check if
both the conditions 'a < 50' and 'a < b' are true.
  Sample Input 1 : 1, 2
Sample Output 1: Numbers meet the conditions
Sample Input 2: 2, 2
Sample Output 2: Numbers not meet the conditions*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(a<50 && a<b)
      cout<<"Numbers meet the conditions"<<endl;
    else
      cout<<"Numbers not meet the conditions"<<endl;
    return 0;    
}
/* PROGRAM DOCUMENTATION
   This program takes two integer inputs from the user and checks if the first 
   number is less than 50 and less than the second number. If the numbers meet 
   the conditions, then the program outputs "Numbers meet the conditions", 
   otherwise, it outputs "Numbers not meet the conditions".*/
