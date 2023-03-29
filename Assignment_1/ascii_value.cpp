/* Print the ASCII value of character ‘U’. 
Sample Input : already mentioned as ‘U’
Sample Output : 85*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"ASCII value of "<<ch<<" is: "<<(int)ch;
    return 0;
}
/* PROGRAM DOCUMENTATION
 * This program converts a character into its ASCII value.
 *
 * The program prompts the user to enter a character.
 * It then reads the character from the user and converts it into its ASCII value.
 * The ASCII value is displayed on the screen.
 */