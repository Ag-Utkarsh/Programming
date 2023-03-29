/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/
// Sample Input: Enter cost price and selling price of the product: 100 200
// Sample Output: Profit earned is: 100
// Sample Input: Enter cost price and selling price of the product: 200 100
// Sample Output: Loss suffered is: 100
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
// PROGRAM DOCUMENTATION
// This program takes cost price and selling price of a product as input from the user and
// calculates the profit or loss.
// The program uses the if-else statement to check if the selling price is greater than the cost price or not.
// If the selling price is greater than the cost price, the program calculates the profit.
// If the selling price is less than the cost price, the program calculates the loss.
// The program outputs the profit or loss.