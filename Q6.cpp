#include<iostream>

using namespace std;             //Name:Azmar kashif Section:B Rollno:22i-2716
int main()
{

double u;
double t;
double a;
double s;

cout << "Enter the initial velocity: " << endl;
cin >> u;
cout << "Enter the time: " << endl;
cin >> t;
cout << "Enter acceleration of body: " << endl;
cin >> a;
s= (u*t) + ((0.5)*a*t*t);
cout << "The value of s is: " << s << endl;
}
