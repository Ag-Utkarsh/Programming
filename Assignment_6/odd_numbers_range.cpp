/* Given two numbers a and b, write a program using functions to print all the odd numbers
   between them. 
   Sample Input: 1 10
   Sample Output: 1 3 5 7 9 */
   #include<iostream>
   using namespace std;
   bool odd(int num){
        if(num%2==1)
           return true;
        else
           return false;   
   }
   int main(){
       int a,b;
       cout<<"Enter two numbers"<<endl;
       cin>>a>>b;
       for(int i=a;i<=b;i++){
           if(odd(i)==1)
             cout<<i<<" ";
       }
       cout<<endl;
       return 0;
   }
/* PROGRAM DOCUMENTATION
This program is written in C++ and takes two integer inputs from the user, namely 'a' and 'b.' The program then checks for all odd numbers between 'a' and 'b' (inclusive) and prints them out.

The 'odd' function is defined at the beginning of the program. It takes an integer 'num' as its input and returns a boolean value, either true or false, depending on whether the input number is odd or not. The function checks if the input number is divisible by 2 by taking the modulus of 'num' with 2. If the modulus is 1, then 'num' is odd, and the function returns true. If the modulus is 0, then 'num' is even, and the function returns false.

The 'main' function starts by declaring two integer variables, 'a' and 'b.' The program then prompts the user to enter two integer values, and the 'cin' statement takes the input values and stores them in 'a' and 'b,' respectively.

A 'for' loop is then used to iterate through all integer values from 'a' to 'b.' For each iteration, the 'odd' function is called with the current integer value, and if the function returns true, the integer value is printed out to the console followed by a space. If the function returns false, the program moves to the next iteration without printing anything.

Finally, after the 'for' loop, a newline character is printed out to the console, and the program ends with a return statement, returning an integer value of 0.*/   