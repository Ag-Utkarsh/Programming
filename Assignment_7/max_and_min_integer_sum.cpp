/*  Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6   */
#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: "; // 1<=n<=100
    cin >> n;
    array<int, 100> arr;
    cout << "Enter values in array" << endl;
    // for loop for using input
    for (int idx = 0; idx < n; idx++)
        cin >> arr[idx];
    int max = arr[0], min = arr[0];
    // for each loop for finding max and min
    for (int idx = 0; idx < n; idx++)
    {
        if (min > arr[idx])
            min = arr[idx];
        if (max < arr[idx])
            max = arr[idx];
    }
    cout << "Sum of max and min integers is: " << max + min << endl;
    return 0;
}
/* PROGRAM DOCUMENTATION
  1. The program starts by including the necessary libraries:

          <iostream> for input and output operations
          <array> for using the array container class
  2. The main() function is defined:

      It declares and initializes variables to be used later
      It prompts the user to enter the size of the array
      It creates an array of integers with a maximum size of 100
      It prompts the user to enter values for each element of the array using a for loop
      It checks each element of the array to see whether it is even or odd, and keeps a count of each using the even and odd variables
      Finally, it prints the count of even and odd integers to the console
  3. The array container class provides a type-safe and efficient way to store a fixed-size sequence of elements.
     In this program, an array of integers is used to store the user input.
  4. The if statement inside the for loop checks whether the current element of the array is even or odd using the modulus operator (%).
     If the remainder of the element divided by 2 is 0, then the element is even. Otherwise, it is odd.
  5. The program prints the count of even and odd integers to the console using the cout statement.   */
