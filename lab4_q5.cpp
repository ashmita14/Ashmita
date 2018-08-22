//write a program to enter two number and find the third angle

//include library
#include<iostream>
using namespace std;
//declaring the int main function
int main(){
	//declaring the variables
	float a1, a2, a3;
	//asking user to enter the two angles
	cout << "Enter two angles of a triangle in degrees." <<endl;
	//accepting the values entered by the user
	cin >>a1;
	cin >>a2;
	//calculating the third angle
	a3=180-a1-a2;
	//displaying the third angle
	cout << "The third angle is = "<< a3 <<endl;
	//returning integer value to int main function
	return 0;
}
