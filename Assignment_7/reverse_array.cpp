/* Given an integer array and its size, reverse the array and print it . 
Here 1<size<101
For ex: arr[]={1,2,3,4,5},n=5
Output: 5,4,3,2,1
arr[]={1,1,1,1,1], n=5
Output: 1,1,1,1,1*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "; // 1<=n<=100
    cin>>n;
    if(n<1 || n>100){
        cout<<"Invalid size";
        return 0;
    }
    int arr[n];
    cout<<"Enter values in array"<<endl;
    // for each loop for using input
    for(int &element: arr)
       cin>>element;
    // for loop for printing reverse array
    for(int idx=n-1; idx>=0; idx--)
       cout<<arr[idx]<<" ";
    cout<<endl;   
    return 0;   
}
/* Program Name: Reverse Array

Program Description:
This program takes an integer as input that represents the size of an array and then takes the values of the array as input from the user. It then prints the array in reverse order.

Program Input:
The program prompts the user to enter the size of the array, which should be an integer between 1 and 100. The program then asks the user to enter the values of the array.

Program Output:
The program outputs the array in reverse order, separated by spaces, followed by a newline character.

Program Algorithm:
1. Prompt the user to enter the size of the array.
2. Read the size of the array from the user.
3. If the size is not between 1 and 100, print "Invalid size" and exit.
4. Create an integer array of size n.
5. Prompt the user to enter the values of the array.
6. Read the values of the array using a range-based for loop.
7. Print the values of the array in reverse order using a regular for loop.
8. Print a newline character.

Program Example:
Enter size of array: 5
Enter values in array
1 2 3 4 5
5 4 3 2 1
  */

