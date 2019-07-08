#include "conio.h"
#include "ctime"
#include "ctime"
#include <iostream>
using namespace std;

void shellSort(int x[], int n, int incrmnts[], int numinc)
{
	int span, y;

	for(int incr = 0; incr < numinc; incr++)
	{
		span = incrmnts[incr]; //span is the size of increment
		
		for(int j = span; j<n; j++)
		{
	  		y = x[j]; //insert x[j] at its proper location within its subfile using simple insert sort
			int k;
			for(k = j-span;k>=0 && y<x[k]; k-=span)
			{
					x[k+span] = x[k];
			}
			x[k+span] = y;	
		}
	}
}

int main()
{
	int n;
	cout<<"Enter Array Size:"<<endl;
	cin>>n;
	
	int *a = new int [n]; //array for shell sorting for 3 subfiles
	int *b = new int [n]; //array for shell sorting for 4 subfiles
	int *c = new int [n]; //array for shell sorting for 5 subfiles
	
	int x1[3] = {5, 3, 1}; //array for shell sorting for 3 subfiles
	int x2[4] = {25, 10, 5, 1}; //array for shell sorting for 4 subfiles
	int x3[5] = {100, 50, 25, 10, 1}; //array for shell sorting for 5 subfiles
	
	for(int i=0; i<n; i++) //initializing each array with same random numbers
	{
		a[i] = b[i] = c[i] = (rand() % n);
	}

	//=======================================================================================
	//shell sorting
	//=======================================================================================
	cout<<endl;
	cout<<endl;
	cout<<"Shell Sort Result for SubFiles{5, 3, 1}:"<<endl;
	cout<<"========================================"<<endl;
	clock_t a_time;
	a_time = clock();
	shellSort(a, n, x1, 3);
	cout<<"Running Time: "<<(float)a_time/CLOCKS_PER_SEC<<" Seconds."<<endl;

	cout<<endl;
	cout<<endl;
	cout<<"Shell Sort Result for SubFiles{25, 10, 5, 1}:"<<endl;
	cout<<"============================================="<<endl;
	clock_t b_time;
	b_time = clock();
	shellSort(b, n, x2, 4);
	cout<<"Running Time: "<<(float)b_time/CLOCKS_PER_SEC<<" Seconds."<<endl;

	cout<<endl;
	cout<<endl;
	cout<<"Shell Sort Result for SubFiles{100, 50, 25, 10, 1}:"<<endl;
	cout<<"==================================================="<<endl;
	clock_t c_time;
	c_time = clock();
	shellSort(c, n, x3, 5);
	cout<<"Running Time: "<<(float)c_time/CLOCKS_PER_SEC<<" Seconds."<<endl;
	
	getch();
}
