#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(a<50 && a<b)
      cout<<"Numbers meet the conditions"<<endl;
    else
      cout<<"Numbers not meet the conditions"<<endl;
    return 0;    
}