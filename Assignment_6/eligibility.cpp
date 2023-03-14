/* Given the age of a person, write a function to check if the person is eligible to vote or not.
   Sample Input: 19
   Sample Output: Yes
   Sample Input: 17
   Sample Output: No */
#include<iostream>
using namespace std;
bool eligibility(int age){
    if(age>18)
      return true;
    else
      return false;  
} 
int main(){
    cout<<"Enter age of the person: ";
    int age;
    cin>>age;
    cout<<"Eligiblity to vote: "<<boolalpha<<eligibility(age);
    return 0;
}  
/* PROGRAM DOCUMENTATION
   The program first includes the necessary header files for input/output operations. It then defines the eligibility function that takes an integer age as input and returns a boolean value. The function uses a simple if-else statement to determine whether the age is greater than 18, and returns true if the age is greater than 18, and false otherwise.
   The main function begins by prompting the user to enter the age of the person whose eligibility needs to be determined. It then reads the input age from the user and stores it in the age variable. It calls the eligibility function to determine the eligibility status of the person and stores the result in a boolean variable called isEligible. Finally, it prints the eligibility status using the cout object and the boolalpha manipulator to print the boolean value as "true" or "false" instead of 1 or 0.
*/