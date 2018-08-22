//Write a program to enter marks of five subjects and find total, average and percentage

//include libraries
#include<iostream>
#include<iomanip>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	float m1, m2, m3, m4, m5, tl, avg, pr;
	//asking user to enter marks of five subjects
	cout << "Enter marks of five subjects out of 100." <<endl;
	//accepting marks of five subjects
	cin >>m1;
	cin >>m2;
	cin >>m3;
	cin >>m4;
	cin >>m5;
	//calculating total
	tl=m1+m2+m3+m4+m5;
	//calculating average
	avg=tl/5;
	//calculating percentage
	pr=(tl/500)*100;
	//setting precision
	std::cout << std::fixed;
	std::cout << std::setprecision(4);
	//displaying the results
	cout << "Total marks = " << tl <<endl;
	cout << "Average marks = " << avg <<endl;
	cout << "Percentage = " << pr <<"%"<<endl;
	//returning integer value to int function
	return 0;
}

