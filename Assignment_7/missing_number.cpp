/*vGiven an array containing n distinct integers in the range 
[0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range 
that is not present in the array. Here 1<n<101.
Ex: arr=[3,0,1]
Output: 2
n=3, thus the range will be [0,3]
Ex: arr=[8,6,4,2,3,5,0,1]
Output: 7
n=8, thus the range will be [0,8] */
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0,total_sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter unique values for array arr[] in range 0 to n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    total_sum = (n*(n+1))/2; 
    cout<<"The missing number is: "<<total_sum-sum<<endl;
    return 0;
}
// PROGRAM DOCUMENTATION
// This program finds the missing number in an array of size n.
   // The array contains unique values in the range 0 to n.
// The program uses the formula (n*(n+1))/2 to find the sum 
   //of all the numbers in the range 0 to n.
// The program then subtracts the sum of the elements of the 
   //array from the sum of all the numbers in the range 0 to n.
// The difference is the missing number.
//Test Cases
// 1. Enter the size of array: 5
//    Enter unique values for array arr[] in range 0 to n
//    0 1 2 3 5
//    The missing number is: 4
// 2. Enter the size of array: 5
//    Enter unique values for array arr[] in range 0 to n
//    0 1 2 3 4
//    The missing number is: 5
// 3. Enter the size of array: 6
//    Enter unique values for array arr[] in range 0 to n
//    0 1 2 3 4 6
//    The missing number is: 5
// 4. Enter the size of array: 2
//    Enter unique values for array arr[] in range 0 to n
//    0 1
