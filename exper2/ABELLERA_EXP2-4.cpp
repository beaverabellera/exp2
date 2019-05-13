#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int start;
	for(start=1; start<=28; start++)
	{
		if(start<=10)
		{
			cout<<start<<",";
			continue;
		}
		cout<<++start<<",";
	}
	cout<<++start;
	getch();
	return 0;
}