/* Given a natural number, find the number of 0’s in the binary representation of that number.

Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.
Sample Input:9
Sample Output: 2
Explanation: As the binary representation of 9 is 1001
Sample Input: 6
Sample Output: 1
Explanation: As the binary representation of 6 is 0110  */

#include <iostream>
using namespace std;

int binary(int num) {
    int binaryno = 0, power = 1;
    while (num > 0) {
        int parity_digit = num % 2;
        binaryno += parity_digit * power;
        power *= 10;
        num /= 2;
    }
    return binaryno; // Add a return statement to return the binary representation
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int binaryrep = binary(num);
    int cpy = binaryrep;
    int count = 0;
    while (binaryrep > 0) {
        int digit = binaryrep % 10;
        if (digit == 0)
            count++;
        binaryrep /= 10;
    }
    cout << "Number of zeroes in binary number " << cpy << " is: " << count;
}
/*   Program Documentation
This program takes an integer input from the user and calculates its binary representation. It then counts the number of zeroes in the binary representation and outputs the result to the console.

Input
The program prompts the user to enter a number using the cout and cin statements in the main() function. The input must be a positive integer.

Binary Representation
The binary() function takes an integer as input and calculates its binary representation. It does this by performing a series of modulo and division operations on the input number using the binary number system. The function returns the binary representation as an integer.

Counting Zeroes
After calculating the binary representation of the input number, the program uses a while loop to count the number of zeroes in the binary representation. It does this by using the modulo operator % to extract each digit of the binary representation and checking if it is equal to zero. If it is, the program increments a counter variable. The loop continues until all digits of the binary representation have been checked.*/