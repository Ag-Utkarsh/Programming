#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 5 digit number: ";
    cin>>num;
    int sum = num/10000+(num/10)%10;
    cout<<"Sum of first and second last digit is: "<<sum;
    return 0;    
}