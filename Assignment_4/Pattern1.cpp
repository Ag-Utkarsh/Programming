/* Write a program to print the cross pattern given below
   *   *
    * *
     *
    * *
   *   *  */
#include<iostream>
using namespace std;
int main(){
   int rows=5;
   for(int i=1;i<=rows;i++ ){
      for(int j=1;j<=rows;j++){
         if(i==j||i+j==rows+1)
            cout<<"*";
         else  
            cout<<" ";      
      }
      cout<<"\n";
   }
   return 0;
}