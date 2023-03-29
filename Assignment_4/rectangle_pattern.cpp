/* Write a C++ program to print a rectangle out of * 
  Sample Input :
  Please Enter the number of StarRows: 2
  Please Enter the number of StarColumns: 3
  Sample Output: 
  * * *
  * * *
    */
#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter the number of StarRows: ";
    cin>>rows;
    cout<<"Enter the number of StarColumns: ";
    cin>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++)
           cout<<"* ";
        cout<<endl;   
    }
    return 0;
}
// PROGRAM DOCUMENTATION
// FOR LOOP: The for loop is used to print the stars as per the number of rows and columns.


       