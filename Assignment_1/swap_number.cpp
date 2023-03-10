#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"Before swapping"<<endl;
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    int swap=x;
    x=y;
    y=swap;
    cout<<"After swapping"<<endl;
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    return 0;
}