/* Write a program to print + pattern given below :
   *
   *
 *****
   *
   *       */
#include<iostream>
using namespace std;
int main(){
    int row;
      cout<<"Enter the number of rows: ";
      cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            //print star at only middle row
            if(i==row/2+1) 
               cout<<"*";
            else{
               //other than middle row print star at row/2+1 index
               if(j==row/2+1)
                  cout<<"*";
               else
                  cout<<" ";   
            }    
        }
         cout<<endl;
    }
    return 0;
}
// PROGRAM DOCUMENTATION
// for loop is used to iterate the rows
// nested for loop is used to iterate the columns
// if condition is used to print star at only middle row
// else if condition is used to print star at row/2+1 index
// else condition is used to print space
// OUTPUT
// Enter the number of rows: 5
//     *
//     *
//   *****
//     *
//     *

