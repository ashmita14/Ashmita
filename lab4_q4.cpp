//Write a program to accept days and convert it to years, weeks and days

//include library
#include<iostream>
using namespace std;
//declaring int main function
int main(){
//declaring variables
int dy, yr, wk, r1, r2;
//asking user for number of days
cout <<"Enter the number of days."<<endl;
//accepting value
cin >>dy;
//calculating number of years
yr=dy/365;
//calculating remaining days
r1=dy%365;
//calculating number of weeks
wk=r1/7;
//calculating remaining number of days
r2=r1%7;
//displaying result
cout <<dy <<" days = "<< yr <<" years, "<< wk <<" weeks and "<< r2 <<" days."<<endl;
//returning integer value to int function
return 0;
}

