/*Write a program to calculate the factorial of a number.*/
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