/*Write a program to print all Armstrong numbers between 100 and 500.
  Explanation: A three digit number is called the Armstrong number if 
  the sum of the cube of its digit is equal to the number itself.*/
// Sample Output: Armstrong numbers between 100 and 500 are: 153 370 371 407
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers between 100 and 500 are:" << endl;
    for(int i = 100; i <= 500; i++) {
        int num = i;
        int sum = 0;
        while(num > 0) {
            int digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if(sum == i) {
            cout << i << " ";
        }
    }
    return 0;
}

// PROGRAM DOCUMENTATION
// Program Description: This program prints all Armstrong numbers between 100 and 500.
//  FOR LOOP: The for loop is used to iterate through the numbers between 100 and 500.
//  WHILE LOOP: The while loop is used to calculate the sum of the cube of the digits of the number.
// pow() FUNCTION: The pow() function is used to calculate the cube of the digit.
/* IF STATEMENT: The if statement is used to check if the sum of the cube of the 
digits of the number is equal to the number itself.*/
// Sample Output: Armstrong numbers between 100 and 500 are: 153 370 371 407