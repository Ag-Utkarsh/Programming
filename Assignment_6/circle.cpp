/* Given radius of a circle. Write a function to print the area and circumference of the circle.
  Sample Input: r=3
  Sample Output: Area : 28.26
                 Circumference : 18.84  */
#include<iostream>
#include<cmath>
using namespace std;
double area(double radius){
    return radius*radius*M_PI;
} 
double circumference(double radius){
    return 2*M_PI*radius;
} 
int main(){
    double radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"Area of circle is: "<<area(radius)<<endl;
    cout<<"Circumference of circle is: "<<circumference(radius)<<endl;
    return 0;
}     
/* PROGRAM DOCUMENTATION
   In this program, there are three functions: area(), circumference(), and main(). The area() function calculates the area of a circle based on the radius passed to it. The circumference() function calculates the circumference of a circle based on the radius passed to it. The main() function prompts the user to enter the radius of a circle, calculates the area and circumference of the circle using the area() and circumference() functions, and displays the results to the user. The program uses the math constant M_PI from the cmath library to perform the calculations.*/          