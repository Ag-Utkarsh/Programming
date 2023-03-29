/* Write a C++ program to find size of basic data types. 
Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
to accomplish this. Give it a try to know the data types in depth)
Sample Output :
Size of fundamental data types :
The sizeof(char) : 1 bytes
The sizeof(short) : 2 bytes
The sizeof(int) : 4 bytes
The sizeof(long): 4 bytes
The sizeof(long long) : 8 bytes
The sizeof(float) : 4 bytes
The sizeof(double) : 8 bytes
The sizeof(long double) : 12 bytes
The sizeof(bool) : 1 bytes*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Size of char: "<<sizeof(char)<<endl;
    cout<<"Size of short: "<<sizeof(short)<<endl;
    cout<<"Size of int: "<<sizeof(int)<<endl;
    cout<<"Size of long: "<<sizeof(long)<<endl;
    cout<<"Size of long long: "<<sizeof(long long)<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
    cout<<"Size of double: "<<sizeof(double)<<endl;
    cout<<"Size of long double: "<<sizeof(long double)<<endl;
    cout<<"Size of boolean: "<<sizeof(bool)<<endl;
    return 0;
}
/* PROGRAM DOCUMENTATION*/
/* 
 * This program prints the size of various data types.
 *
 * The program prints the size of char, short, int, long, long long, float, double, long double and boolean data types.
 * It uses the sizeof operator to print the size of each data type.
 */