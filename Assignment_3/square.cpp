/*Write a program which takes the values of length and breadth from user and check if it is
a square or not.*/
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