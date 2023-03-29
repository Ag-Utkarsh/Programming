/* Given an integer array containing n elements. Find the element 
in the array for which all the elements
to its left are smaller than it and all the elements to the right 
of it are larger than it. Here 1<n<101.
Ex: arr=[1,6,5,7,10,8,9]
Output: 7
Explanation: Here all the elements to the left of 7 are smaller 
than it and all the elements to the right of it
are greater than it.
Ex: arr=[5,6,2,8,10,9]
Output: -1
Explanation: Here there is no element in the array which satisfies 
the given condition.*/
#include<iostream>
using namespace std;

void enter_values(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values for array arr[]:"<<endl;
    enter_values(arr, n);
    cout<<"Values which satisfy the condition are: ";

    bool satisfies_condition;
    for(int i=1; i<n-1; i++) {
        satisfies_condition = true;
        for(int j=0; j<i; j++) {
            if(arr[j] > arr[i]) {
                satisfies_condition = false;
                break;
            }
        }
        if(!satisfies_condition) {
            continue;
        }
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i]) {
                satisfies_condition = false;
                break;
            }
        }
        if(satisfies_condition) {
            cout<<arr[i]<<" ";
        }
    }
    if(!satisfies_condition)
    cout<<"No such value exists"<<endl;
    cout<<endl;
    return 0;
}
//PROGRAM DOCUMENTATION
/* Function: enter_values()

This function is used to take input from the user for the values to be stored in the array. 
It takes two parameters: an integer array and an integer value n, which represents the 
size of the array. It uses a for loop to iterate over the array and cin statement 
to take input from the user for each element of the array.

Main Function: int main()

This function first takes input from the user for the size of the array using 
the cin statement and stores it in the variable n. It then creates an array of 
size n using the variable-length array (VLA) feature of C++.

Next, the function calls the enter_values() function, passing the array 
and the size of the array as arguments, to take input from the user for 
the elements of the array.

After that, the program uses nested for loops to iterate over the 
elements of the array and check if each element satisfies a certain 
condition. The condition is that the element should be greater than 
all the elements that come before it in the array, and it should be 
smaller than all the elements that come after it in the array.

If an element satisfies this condition, it is printed to the 
console using the cout statement.

Variable: bool satisfies_condition

This variable is a boolean value that is used to check if an 
element of the array satisfies the condition mentioned above. 
It is set to true at the beginning of each iteration of the 
outer for loop, and is set to false if the element does not 
satisfy the condition.

If the element does not satisfy the condition in the first nested 
for loop, the program uses the continue statement to skip the rest
 of the iteration of the outer loop and move on to the next element.

If the element satisfies the condition in both nested for loops, i
t is printed to the console using the cout statement.
*/