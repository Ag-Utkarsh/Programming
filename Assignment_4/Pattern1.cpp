/* Write a program to print the cross pattern given below
   *   *
    * *
     *
    * *
   *   *  */
#include<iostream>
using namespace std;
int main(){
   int rows;
   cout<<"Enter the number of rows: ";
   cin>>rows;
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
// PROGRAM DOCUMENTATION
// Program Description: This program prints the cross pattern given above
// FOR LOOP: The for loop is used to iterate through the rows.
// Nested FOR LOOP: The nested for loop is used to iterate through the columns.
/* IF STATEMENT: The if statement is used to check if the row number is equal 
   to the column number or the sum of the row number and column number is equal 
   to the number of rows plus 1.*/
// Test Case 1:  Enter the number of rows: 5
// Sample Output: *   *
//                 * *
//                  *
//                 * *
//                *   *
// Test Case 2:  Enter the number of rows: 7
// Sample Output: *     *
//                 *   *
//                  * *
//                   *
//                  * *
//                 *   *
//                *     *

