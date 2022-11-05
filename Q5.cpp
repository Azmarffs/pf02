#include<iostream>

using namespace std;         //Name:Azmar kashif Section:B Rollno:22i-2716
int main()
{
int AgeinYears;
int AgeinMonths;
int AgeinDays;
int DOBinYears;
int DOBinMonths;
int DOBinDays;

cout << "Enter your age in years: " <<endl;
cin >> AgeinYears;
cout << "Enter your age in months: " <<endl;
cin >> AgeinMonths;
cout << "Enter your age in days: " <<endl;
cin >> AgeinDays;
	
DOBinYears= 2022 - AgeinYears;
DOBinMonths= 12 - AgeinMonths;
DOBinDays= 30 - AgeinDays;
cout << "The Age is: " << endl;
cout << DOBinDays << "-" <<  DOBinMonths << "-" << DOBinYears << endl; 
}	 
