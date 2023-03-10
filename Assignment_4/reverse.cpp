/*Write a program to reverse a given integer number.*/
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