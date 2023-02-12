#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a number ";
   cin>>num;
   
   int count=0,c=1;
   while(num!=0){//decimal to binary
      int r = num%2;
      if(r==0){
         count++;
      }
      num/=2;
   }
   cout<<"The total no. of zero's are = "<<count<<endl;

  
   return 0;
} 