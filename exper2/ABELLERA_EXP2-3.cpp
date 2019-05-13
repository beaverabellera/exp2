#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int x;
	double y, V;
	const double z = 2.5;
	cout<<"Enter x value: "; cin>>x;
	cout<<"Enter y value: "; cin>>y;
	
	cout<<setprecision(2)<<fixed;
	std::cout << std::setw(10);

	switch(x)

		{
	case 1:
			if( y<5 && y>1)
			{
				V = x*y*z;
			cout<<V;
				}
			else if(y>=5)
			{
				V = x+(y/z);
			cout<<V;
				}
			break;

		
	case 2:
			if(y<=5)
			{
				V = abs((x-y)/z);
				cout<<V;}
			else if(y>5)
			{
				V = x-sqrt(y+z);
				cout<<V;}
				break;
	default:
		
				V = x+y+z;
				cout<<V;


	}

	getch();
	return 0;
}