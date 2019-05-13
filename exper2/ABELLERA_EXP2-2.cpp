#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double prevBill, gallons;
	int wdemand = 35, lcharge = 20, gallprice = 1.1;
	cout<<"Enter gallons used from the last two months- ";cin>>gallons;
	cout<<"Enter previous bill- "; cin>>prevBill;

	cout<<setprecision(2)<<fixed;
	if(prevBill==0)
		cout<<"Amount due - "<<wdemand+(1.1*gallons);
	else
		cout<<"Amount due - "<<lcharge+wdemand+prevBill+((gallprice*gallons));

	getch();
	return 0;
}