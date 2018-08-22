//Write a program to enter temperature in fahrenheit and convert it to celcius

//include library
#include<iostream>
using namespace std;
//declaring int main function
int main(){
	//declaring variables
	float tf, tc;
	//asking user for temperature in fahrenheit
	cout <<"Enter temperature in Fahrenheit." <<endl;
	//accepting value
	cin >>tf;
	//calculating the temperature in celcius
	tc=5.0*((tf-32.0)/9.0);
	//displaying the result
	cout <<"Equivalent temperature in celcius is = " << tc <<endl;
	//returning integer value to int function
	return 0;
}

