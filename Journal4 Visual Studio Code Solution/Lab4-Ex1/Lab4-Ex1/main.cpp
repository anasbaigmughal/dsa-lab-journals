#include <iostream>
#include "conio.h"
using namespace std;

int ackermann(int m, int n)
{
	if(m==0)
	{
		return (n+1);
	}
	else if(m!=0 && n==0)
	{
		return (ackermann(m-1, 1));
	}
	else if(m!=0 && n!=0)
	{
		return ( ackermann( m-1, ackermann(m, n-1) ) );
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
	cout<<"Result of Ackermann("<<m<<","<<n<<")=  "<<ackermann(m, n);
	getch();
}

