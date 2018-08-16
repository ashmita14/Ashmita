//first include library
#include<iostream>
using namespace std;
//declare the main function
int main()
{
//declaring basic data types
int n=2;
float f=2.3;
char c='c';
double d=6.78;
bool b=0;
//print the values of the basic data types
cout << "The value of integer n is ="<< n <<endl;
cout << "The value of float f is ="<< f <<endl;
cout << "The value of character c is ="<< c <<endl;
cout << "The value of double d is ="<< d <<endl;
cout << "The value of boolean b is ="<< b <<endl;
//print the size of the basic data types
cout << "The size of integer data type is "<< sizeof(n) << " bytes." <<endl;
cout << "The size of float data type is "<< sizeof(f) <<" bytes." <<endl;
cout << "The size of character data type is "<< sizeof(c) <<" bytes." <<endl;
cout << "The size of double data type is "<< sizeof(d) <<" bytes." <<endl;
cout << "The size of boolean data type is " << sizeof(b) <<" bytes." <<endl;
//return any integer value to int function
return 0;
}


