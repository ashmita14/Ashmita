//Write a program to enter temperature in celsius and convert it into fahrenheit

//include library
#include<iostream>
using namespace std;
//declaring the main function
int main(){
	//declaring the variables
	float tc, tf;
	//asking user for temperature in celcius
	cout << "Enter a temperature in celcius." <<endl;
	//accepting temperature from user
	cin >> tc;
	//converting into fahrenheit
	tf=tc*9/5+32;
	//displaying the temperature in fahrenheit
	cout << "The temperature in fahrenheit is = " << tf <<endl;
	//returning integer value to int function
	return 0;
}
