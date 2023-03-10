/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price and selling price of the product"<<endl;
    cin>>cp>>sp;
    if(sp>cp)
      cout<<"Profit earned is: "<<sp-cp<<endl;
    else
      cout<<"Loss suffered is: "<<cp-sp<<endl;
    return 0;    
}