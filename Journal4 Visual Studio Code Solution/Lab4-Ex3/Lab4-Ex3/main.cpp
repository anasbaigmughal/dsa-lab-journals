#include <iostream>
#include "conio.h"
using namespace std;

int print(int number)
{
	if( number == 0 )
	{
		return (0);
	}
	else
	{
		cout<<number<<"  ";
		print( number-1 );
	}
}

void main()
{
	int number;
	cout<<"Enter number to print all previous numbers:"<<endl;
	cin>>number;
	cout<<endl;
	cout<<"Result:"<<endl;
	cout<<print(number);
	getch();
}
