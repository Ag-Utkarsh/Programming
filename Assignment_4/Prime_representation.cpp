/*Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
 Sample Input - Enter a +ve Integer : 14
 Sample Output –
 14 = 3 + 11
 14 = 7 + 7    */
 #include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
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
