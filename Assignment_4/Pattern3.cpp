/* Write a program to print alphabet diamond pattern:
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A    */
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        char ch='A';
        for(int k=i;k<=4;k++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
           cout<<ch++; 
        cout<<endl;
    }          
    
    for(int i=1;i<=4;i++){
        char ch='A';
        for(int k=1;k<=i;k++)
            cout<<" ";
        for(int j=2*4-i;j>=i;j--)
            cout<<ch++;    
        cout<<endl;
    }
    return 0;
}    