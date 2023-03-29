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
    for(int i=1;i<=5;i++){//to print the upper half of the pattern
        char ch='A';
        for(int k=i;k<=4;k++)//for loop is used to print the spaces
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)//for loop is used to print the characters
            cout<<ch++;
        cout<<endl;
    }          
    
    for(int i=1;i<=4;i++){//to print the lower half of the pattern
        char ch='A';
        for(int k=1;k<=i;k++)//for loop is used to print the spaces
            cout<<" ";
        for(int j=2*4-i;j>=i;j--)//for loop is used to print the characters
            cout<<ch++;    
        cout<<endl;
    }
    return 0;
}    
// PROGRAM DOCUMENTATION
// for loop is used to iterate the rows
// nested for loop is used to iterate the columns
// char variable is used to store the character
// Another nested for loop is used to print the spaces as per the pattern
// there are two for loops 
// first for loop is used to print the upper half of the pattern
// second for loop is used to print the lower half of the pattern
