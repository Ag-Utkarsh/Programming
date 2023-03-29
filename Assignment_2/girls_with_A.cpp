/* There are 45 total pupils in the class, 25 of whom are boys.
 Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
Sample Input : 45
Sample Output : 19  */
#include <iostream>
using namespace std;
int main() {
    int total_pupils = 45;
    int boys = 25;
    int boys_with_A = 17;

    int girls = total_pupils - boys;
    int students_with_A = boys_with_A / 0.8;
    int girls_with_A = students_with_A - boys_with_A;

    cout << girls_with_A << " girls received grades 'A'" <<endl;
    return 0;
}
// PROGRAM DOCUMENTATION
/* This program takes two integer inputs from the user and checks if
 the first number is less than 50 and less than the second number. 
 If the numbers meet the conditions, then the program outputs "Numbers meet the conditions", 
 otherwise, it outputs "Numbers not meet the conditions".

Header files:
The program uses the "iostream" header file to take user input and output to the console.*/