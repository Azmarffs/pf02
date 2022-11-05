#include<iostream>

using namespace std;          //Name:Azmar kashif Section:B Rollno:22i-2716
int main()
{
int TotalSecs;
int hrs;
int mins;
int hrSecs;
int secs;

cout << "Enter the number of seconds: " << endl;
cin >> TotalSecs;
hrs= TotalSecs/3600;
hrSecs=hrs*3600;
mins = (TotalSecs-hrSecs)/60;
secs = TotalSecs % 60;
cout << "The time in hrs mins and secs is: " << hrs << " hrs" << " " << mins << " mins" << " " << secs << " secs" << endl;
}
