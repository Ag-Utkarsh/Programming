/* Write a function to print squares of the first 5 natural numbers.
   Sample Output: 1 4 9 16 25  */
#include<iostream>
#include<cmath>
using namespace std;
void squarefunc() {
    for(int i=1;i<=5;i++)
       cout<<pow(i,2)<<" ";
    cout<<endl;   
}  
int main(){
    cout<<"Squares of first five natural numbers are: ";
    squarefunc();
    return 0;
}
/*  PROGRAM DOCUMENTATION
   This C++ program calculates and prints the squares of the first five natural numbers.

First, the program includes the necessary libraries for input/output and mathematical operations, iostream and cmath, respectively.

Then, a function named squarefunc() is defined. This function uses a for loop to iterate through the numbers 1 to 5, and for each number, it calculates its square using the pow() function from the cmath library. The squared value is then printed to the console, followed by a space.
In the main() function, a message is first printed to the console to indicate what the program is doing. It then calls the squarefunc() function to calculate and print the squares of the first five natural numbers. Finally, the function returns 0 to indicate successful execution of the program.
*/