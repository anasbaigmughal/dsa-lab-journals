#include <iostream>
#include "conio.h"
using namespace std;

int binomial_computation(int m, int n)
{
	if( m == 0 )
	{
		return (1);
	}
	else if( n == m )
	{
		return (1);
	}
	else
	{
		return (   binomial_computation(m, n-1)   +   binomial_computation(m-1, n-1)   );
	}
}

void main()
{
	int m, n;
	cout<<"Enter value of M:"<<endl;
	cin>>m;
	cout<<"Enter value of N:"<<endl;
	cin>>n;
	cout<<endl;
	if(n>=m)
	{
		cout<<"Result of Binomial Computation  =  "<<binomial_computation(m, n);
	}
	else
	{
		cout<<"INVALID VALUES!!! M couldn't be greater than N because N! = Infinity"<<endl;
	}
	getch();
}