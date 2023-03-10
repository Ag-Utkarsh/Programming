/* Write a program to print + pattern given below :
   *
   *
 *****
   *
   *       */
#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row/2+1;j++){
            if(j==row/2+1||i==row/2+1)
               cout<<"*";
            else
               cout<<" ";   
        }
       if(i==row/2+1)
         cout<<"**";
       cout<<endl;    
    }
    return 0;
}