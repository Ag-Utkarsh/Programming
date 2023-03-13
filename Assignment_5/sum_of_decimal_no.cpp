/* Print the sum of the first 5 decimal numbers or sum from 1 to 5 in binary format.
   Sample Input: 1,2,3,4,5
   Sample Output: 1111     */
 #include<iostream>
 using namespace std;

 int main(){
   int decimal_sum=0;
   for(int i=1;i<=5;i++)
       decimal_sum+= i;
   int bianry_sum =0,power=1;
   while(decimal_sum>0){
      int parity_digit=decimal_sum%2;
      bianry_sum+=parity_digit*power;
      power*=10;
      decimal_sum/=2;    
   }
   cout<<"Sum of numbers in binary format is: "<<bianry_sum<<endl;
   return 0;
 }
 /*This program calculates the sum of the first five natural numbers and converts the result into binary format. 
  It uses a for loop to calculate the decimal sum and a while loop to convert it to binary.
  The binary sum is then output as a single integer.
  PROGRAM ALGORITHM
 1 Initialize the variable decimal_sum to 0.
 2 Use a for loop to iterate from 1 to 5 and add each number to the decimal_sum variable.
 3  Initialize the variables binary_sum and power to 0 and 1, respectively.
 4  Use a while loop to convert the decimal_sum into its binary representation.
 5  Calculate the parity digit of the decimal_sum by taking its modulo 2.
 6  Add the product of the parity digit and power to the binary_sum variable.
 7  Multiply the power variable by 10 to move to the next digit.
 8  Divide the decimal_sum by 2 to shift it to the next digit.
 9  Output the binary_sum variable as the sum of the numbers in binary format.
 */