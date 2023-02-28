/*Write a program to print all Armstrong numbers between 100 and 500.
  Explanation: A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to
the number itself.*/
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
