#include<iostream>
#include<string>
using namespace std;              //Name:Azmar kashif Section:B Rollno:22i-2716
int main()    
{
double hour;
double rate;
double grossPay;

cout << "Enter hours greater than 40: " << endl;
cin >> hour;    
cout << "Enter the rate per hour: " << endl;
cin >> rate;
grossPay=rate*40 + 1.5*rate*(hour-40); //for hours greater than or equal to 40	 
cout<<"The grosspay is " << grossPay << endl;
}
