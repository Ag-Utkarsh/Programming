#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a 3 digit number: ";
    cin>>num;
    int m=num;
    while(num>0){
        sum+=num%10;
        num/= 10;
    }
    cout<<"Sum of digits of the "<<m<<" is: "<<sum;
    return 0;    
}