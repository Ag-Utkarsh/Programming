/*  Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6   */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: "; // 1<=n<=100
    cin >> n;
    int arr[100];
    cout << "Enter values in array" << endl;
    // for loop for using input
    for (int idx = 0; idx < n; idx++)
        cin >> arr[idx];
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    cout << "Sum of max and min integers is: " << max + min << endl;
    return 0;
}

/* PROGRAM DOCUMENTATION
  1. The program starts by including the necessary libraries:

           <iostream> for input and output operations
    2. The main() function is defined:

       It declares and initializes variables to be used later
       It prompts the user to enter the size of the array
       It creates an array of integers with a maximum size of 100
       It prompts the user to enter values for each element of the array using a for loop
       It uses the max_element() and min_element() functions to find the maximum and minimum elements of the array
       Finally, it prints the sum of the maximum and minimum elements to the console
   3. The array container class provides a type-safe and efficient way to store a fixed-size sequence of elements.
      In this program, an array of integers is used to store the user input.
   4. The max_element() and min_element() functions are used to find the maximum and minimum elements of the array.
        <algorithm> for using the max_element() and min_element() functions
      These functions are defined in the <algorithm> header file.
   5. The program prints the sum of the maximum and minimum elements to the console using the cout statement.
   6. std::max_element(): This function is used to find the maximum element in a range defined by two iterators.
   It takes two arguments - the beginning and end iterators of the range to search. In the optimized program,
   we pass the arr pointer as the beginning iterator, and arr+n pointer as the end iterator, where n is the size of the array.
   The function returns an iterator pointing to the maximum element in the range. To get the actual maximum element,
   we dereference the iterator using the * operator.

   7. std::min_element(): This function is used to find the minimum element in a range defined by two iterators.
    It takes two arguments - the beginning and end iterators of the range to search. In the optimized program,0
     we pass the arr pointer as the beginning iterator, and arr+n pointer as the end iterator, where n is the size of the array.
     The function returns an iterator pointing to the minimum element in the range. To get the actual minimum element,
     we dereference the iterator using the * operator.

   8. Both of these functions have a time complexity of O(n), which is optimal for finding the maximum and minimum elements in an unsorted array.
      By using these functions, we avoid the need for an explicit loop to search for the maximum and minimum values, resulting in a more concise and efficient code  */