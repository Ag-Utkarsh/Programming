//Write a program to check whether two numbers (entered by user) are equal or not.
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