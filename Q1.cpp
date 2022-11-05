#include<iostream>

using namespace std;           //Name:Azmar kashif Section:B Rollno:22i-2716
int main(){

float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
double mean;
double median;

cout << "Enter first number: " <<endl;
cin >> n1;
cout << "Enter second number: " <<endl;
cin >> n2;
cout << "Enter third number: " <<endl;
cin >> n3;
cout << "Enter fourth number: " <<endl;
cin >> n4;
cout << "Enter fifth number: " <<endl;
cin >> n5;
cout << "Enter sixth number: " <<endl;
cin >> n6;
cout << "Enter seventh number: " <<endl;
cin >> n7;
cout << "Enter eigth number: " <<endl;
cin >> n8;
cout << "Enter nineth number: " <<endl;
cin >> n9;
cout << "Enter tenth number: " <<endl;
cin >> n10;

median = ((((n1, n2, n3, n4, n5, n6, n7, n8, n9, n10)/2) + ((n1, n2, n3, n4, n5, n6, n7, n8, n9, n10/2)+1)))/2;
cout << "The median for numbers is: " << median << endl;
mean = ((n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10);
cout << "The mean for numbers is: " << mean << endl;
}
