/* Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.
Sample Input :
Enter an operator (+, -, *, /): -
Enter two numbers:
6
8
Sample Output : 6 - 8 = -2 */
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    char operation;
    cout<<"Which operation do you want to perform? ";
    cin>>operation;
    switch(operation){
        case '+':cout<<"Sum of number is: "<<num1+num2;
        break;
        case '-':cout<<"Difference between the numbers is: "<<num1-num2;
        break;
        case '*':cout<<"Product of numbers is: "<<num1*num2;
        break;
        case '/':cout<<"Division : "<<num1/num2;
        break;
        default: cout<<"Wrong input";
    }
    return 0;
}