#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++)
       f=f*i;
    return f;   
}
int combination(int x,int y){
    int c;
    if(x-y==0||x==0||y==0)
       c=1;
    else   
       c = factorial(x)/(factorial(x-y)*factorial(y));
    return c;
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++)
            cout<<combination(i,j)<<" ";
        cout<<endl;    
    }   
    return 0;
}