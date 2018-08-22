//including library
#include<iostream>
#include<iomanip>
using namespace std;
//declaring int function
int main(){

	//declaring variables 
	int lcm;
	float lm;
	double lkm;
	//asking user for value of length in centimeter
	cout << "Give a length in centimeter." <<endl;
	//accepting the value of length
	cin >> lcm;
	//finding equivalent length in meter
	lm=lcm/100;
	//finding equivalent length in kilometer
	lkm=lm/1000;
	//fixing decimal places upto 4 places
	std::cout << std::fixed;
	std::cout << std::setprecision(4);
	//displaying the equivalent lengths in meter and kilometer
	cout << "The equivalent length in meter is = " << lm <<endl;
	cout << "The equivalent length in kilometer is = " << lkm <<endl;
	//returning integer value to int function
	return 0;
}


