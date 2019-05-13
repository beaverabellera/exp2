#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	char packageType;
	int hrs;
	int packAPrice = 995, packBPrice = 1495, packCPrice = 1995; 

	cout<<"Enter package type - \n";
	cout<<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout<<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";	
	cout<<"Package C: For P1995/mo of unlimited access is provided.\t\n";
	cin>>packageType;

	cout<<"Enter hours of internet access- "; cin>>hrs;

	switch(packageType)
	{
	case 'a':
	case 'A':   
		cout<<"Amount due - "<<packAPrice+(20*(hrs-10));
		break;

	case 'b':
	case 'B':
		cout<<"Amount due - "<<packBPrice+(10*(hrs-20));
		break;

	case 'c':
	case 'C':
		cout<<"Amount due - "<<packCPrice;
		break;
	default:
		cout<<"package types are only a, b, and c";
	}

	getch();
	return 0;
}