#include <iostream>
#include "conio.h"
using namespace std;

int sum(int *a, int size)
{
	if(size == 0)
	{
		 return (0);
	}
	else
	{
		return (  a[size-1] + sum(a, size-1)  );
	}
}

void main()
{
	int a[5]={1, 2, 3, 4};
	cout<<"Result: "<<sum(a, 4);
	getch();
}