#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
	{
		cout<<"The first 20 fibonacci numbers are...\n";
   int limit, first = 0, second = 1, third;
 
   for ( limit = 0 ; limit <22; limit++ )
   {
      if ( limit <= 1 )
         third = limit;
      else
      {
         third = first + second;
         first = second;
         second = third;
      }
      cout << third<<",";
   }
	getch();
    return 0;
}