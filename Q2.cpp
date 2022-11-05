#include<iostream>
#include<cmath>
using namespace std;        //Name:Azmar kashif Section:B Rollno:22i-2716	
int main(){
float P;
float r;	
float t;
float A;
cout << "Enter Principal Amount: " << endl;
cin >> P;
cout << "Enter annual interset rate: " << endl;
cin >> r;
cout << "Enter investment tenure in the year: " << endl;
cin >> t;
A= (P*pow((1+((r/100)/12)), (12)*t));
cout << "The interest value compounded months is: "<< A << endl;
}
