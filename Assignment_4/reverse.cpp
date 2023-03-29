/*Write a program to reverse a given integer number.*/
// Sample Input: Enter a number: 1234
// Sample Output: Reverse of 1234 is: 4321
// Sample Input: Enter a number: 1000
// Sample Output: Reverse of 1000 is: 1
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int reverse=0,m=num;
    while(num>0){
        int lastdigit= num%10;
        reverse=reverse*10+lastdigit;
        num/=10;
    }
    cout<<"Reverse of "<<m<<" is: "<<reverse;
    return 0;     
}
// PROGRAM DOCUMENTATION
// WHILE LOOP: The while loop is used to reverse the number.
