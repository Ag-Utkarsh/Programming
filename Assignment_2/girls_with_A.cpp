/* There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include <iostream>*/
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
