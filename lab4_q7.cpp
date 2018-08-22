//Write a program to find the area of an equilateral triangle 

//include libraries
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//declaring int main function
int main(){
//declaring the variables
double a, ar;
//asking user for side of equilateral triangle
cout << "Enter the side of equilateral triangle." <<endl;
cin >>a;
//calculating area of triangle
ar=(sqrt(3.0))*(a*a)/4;
//setting precision of decimal values upto 4 places
std::cout << std::fixed;
std::cout << std::setprecision(4);
//displaying the area
cout << "The area of the triangle is = " << ar <<endl;
//returning integer value to int function
return 0;
}

