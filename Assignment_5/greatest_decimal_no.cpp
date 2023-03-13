/* Given two binary numbers, return the greatest of these numbers in decimal format.
   Sample Output: 1001 and 0100 
   Sample Input:  9*/
   #include<iostream>
   #include<cmath>
   #include<algorithm>
   using namespace std;
   int decimal(int num){
    int sum=0,count=0;
    while(num>0){
        int digit = num%10;
        sum+= pow(2,count)*digit;
        num/= 10; 
        count++; 
    }
    return sum;
   }
   int main(){
    cout<<"Enter two numbers"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    int dec_rep1=decimal(num1);
    int dec_rep2=decimal(num2);
    cout<<"Greater number is: "<<max(dec_rep1,dec_rep2);
    return 0;
   }
   /*  PROGRAM DOCUMENTATION
       The decimal function is used to convert the binary representation of a number to decimal form. It takes a binary number as input and returns its decimal equivalent. The function works by extracting the digits of the binary number from right to left using the modulo operator %, and adding the product of each digit and the corresponding power of 2 to a running sum. The power of 2 is calculated using the pow function from the cmath library. The count variable keeps track of the position of the digit within the binary number.

In the main function, the user is prompted to enter two binary numbers which are stored in variables num1 and num2. The decimal function is called on each of these numbers, and the resulting decimal representations are stored in variables dec_rep1 and dec_rep2. Finally, the max function from the algorithm library is used to find the greater of the two decimal representations, and the result is printed to the console.

Note that the program assumes that the user enters valid binary numbers (i.e., each digit is either 0 or 1). If invalid input is provided, the program may produce incorrect results or crash.*/