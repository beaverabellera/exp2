#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int n = 1, sum;

while(n = 1)
{
	cout<<"Enter a number: "; cin>>n;

		if(n>0)
		{
			sum = (n*(n+1))/2;
			cout<<"The sum of all whole numbers from 1 to "<<n<<" is "<<sum<<".\n";	}

		else
		{
			cout<<"Thank you!\n";	
			break;	 }
}

getch();
return 0;
}