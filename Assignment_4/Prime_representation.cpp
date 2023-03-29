/*Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
 Sample Input - Enter a positive integer : 14
 */
 // Sample Output: 14 = 3 + 11
    //                14 = 7 + 7
 // Sample Input - Enter a positive integer : 15
    // Sample Output: 15 cannot be expressed as a sum of two prime numbers.   
 #include <iostream>
 #include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2;  i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    bool found = false;
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << " = " << i << " + " << n - i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << n << " cannot be expressed as a sum of two prime numbers." << endl;
    }
    return 0;
}
// PROGRAM DOCUMENTATION
/* This program consists of two functions: isPrime and main.

The isPrime function checks whether a given number is prime or 
  not using a basic trial division algorithm. It takes an integer
  n as input, and returns true if n is prime, and false otherwise.

The main function is the entry point of the program. It takes a positive 
integer n as input from the user, and then checks every possible pair of 
prime numbers that add up to n. If such a pair is found, the program 
prints it out. If no such pair is found, the program prints a message 
indicating that n cannot be expressed as a sum of two prime numbers.*/
      

