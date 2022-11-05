#include<iostream>
#include<cmath>
using namespace std;         //Name:Azmar kashif Section:B Rollno:22i-2716
int main()
{
double x;
double radians;
double const pi = 3.1415926535897932384626433832795;
double result;

cout << "Enter x in Degrees: " << endl;
cin >> x;
radians =x * pi/180;
cout << "The value of x is: " << endl;
cout << radians << endl;
result =x - (pow(x, 3)/(3*2*1)) + (pow(x, 5)/(5*4*3*2*1)) - (pow(x, 7)/(7*6*5*4*3*2*1)) + (pow(x, 9)/(9*8*7*6*5*4*3*2*1)); 
cout << "The value of sin(x) is: " << endl;
cout << result << endl; 
result =1 - pow(x, 2)/(2*1) + pow(x, 4)/(4*3*2*1) - pow(x, 6)/(6*5*4*3*2*1) + pow(x, 8)/(8*7*6*5*4*3*2*1);
cout << "The value of cos(x) is: " << endl;
cout << result << endl; 

}
