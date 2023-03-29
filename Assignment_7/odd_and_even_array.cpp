/* Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
Even Numbers = 2
Explanation: The even numbers present in the array are 2,4 and the odd numbers present in the array
are 1,3 and 5.  */
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter size of array: ";
    cin >> n;

    array<int, 100> arr; // maximum size of 100
    cout << "Enter values in array" << endl;
    int even = 0, odd = 0;

    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
        if (arr[idx] % 2 == 0) // check for eveness of the element in array
            even++;
        else
            odd++;
    }

    cout << "Number of odd integers are: " << odd << endl;
    cout << "Number of even integers are: " << even << endl;
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
