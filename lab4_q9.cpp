//Write a program to enter P,T,R and calculate Simple Interest

//include libraries
#include<iostream>
#include<iomanip>
using namespace std;
//declaring the main function
int main(){
	//declaring the variables
	float P, R, T, In;
	//Asking user for Principle
	cout <<"Enter Principle." <<endl;
	//accepting the value
	cin >>P;
	//Asking user for Rate
	cout << "Enter rate." <<endl;
	//accepting the value
	cin >>R;
	//Asking user for time period
	cout <<"Enter time period." <<endl;
	//accepting the value
	cin >>T;
	//calculating interest
	In=P*R*T;
	//setting precision
	std::cout <<std::fixed;
	std::cout <<std::setprecision(2);
	//displaying the result
	cout <<"Simple Interest = " <<In<<endl;
	//returning integer value to int function
	return 0;
}
