//Write a program to enter P, R, T and calculate Compound Interest

//including libraries
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
//declaring main function
int main(){
	//declaring the variables
	float P, R, T, CI;
	//asking user for Principle
	cout << "Enter Principle." << endl;
	//accepting the value
	cin >>P;
	//Asking user for Rate
	cout << "Enter rate." <<endl;
	//accepting value
	cin >>R;
	//Asking user for time
	cout << "Enter time period." <<endl;
	//accepting value
	cin >>T;
	//calculating Compound Interest
	CI=P*(pow((1.0+R),T)-1.0);
	//setting precision
	std::cout <<std::fixed;
	std::cout <<std::setprecision(2);
	//displaying Compound Interest
	cout << "Compound Interest = " <<CI<<endl;
	//returning integer value to int function
	return 0;
}

