/* Given two numbers a and b, write a program to print all the prime numbers present between
a and b.
Sample Input: 2 10
Sample Output: 2 3 5 7 */
#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int num){
    if (num <= 1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)
           return false;
    }
    return true;
}

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    for(int i=max(2,a);i<=b;i++){
        if(is_prime(i))
          cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
/* PROGRAM DOCUMENTATION
   This program takes two integer inputs a and b from the user, and lists all the prime numbers between a and b (inclusive) on the console.
   
   Functions:
   1. is_prime(int num) - This function takes an integer input num and returns true if the input is a prime number, false otherwise. The function first checks if the input is less than or equal to 1, and returns false in that case. For any number greater than 1, the function uses a for loop to check if the number is divisible by any integer from 2 up to the square root of the number. If it is divisible by any integer in that range, the function returns false; otherwise, it returns true.
   
   2. main() - This function is the entry point of the program. It prompts the user to enter two integer values a and b, and then uses a for loop to iterate over all the integers between a and b (inclusive). For each integer in that range, the function calls the is_prime() function to check if it is a prime number. If the number is prime, it is printed on the console.
      The square root of num is used in the is_prime function to reduce the number of iterations required to check if a number is prime.
      When checking if a number num is prime, we only need to check if it is divisible by numbers up to and including its square root. If num has a factor larger than its square root, then it must also have a factor smaller than its square root, because factors always come in pairs.
      For example, consider the number 15. Its factors are 1, 3, 5, and 15. The square root of 15 is approximately 3.87, so we only need to check if 15 is divisible by numbers up to and including 3. If 15 is not divisible by any of these numbers, then it is prime.
      By using the square root of num as the upper bound of the loop in the is_prime function, we reduce the number of iterations required to check if a number is prime, which improves the performance of the program.
      
      Libraries:

                 This program uses the following libraries:

                    iostream: for standard input/output streams (cin/cout).
                    cmath: for mathematical functions, including the square root function.  */