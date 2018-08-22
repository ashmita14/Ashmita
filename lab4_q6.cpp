//Write a program to input base and height of a triangle and finding area

//including library
#include<iostream>
using namespace std;
//declaring the main function
int main(){
	//declaring the variables
	float b, h, ar;
	//asking user to input base
	cout << "Enter the base of the triangle." <<endl;
	//accepting base
	cin >>b;
	//asking user to input height
	cout << "Enter height of the triangle." <<endl;
	//accepting height
	cin >>h;
	//calculating  area
	ar=h*b;
	//displaying area of the triangle
	cout << "The area of the triangle is = " << ar <<endl;
	//returning a integer value to the int function
	return 0;
}
