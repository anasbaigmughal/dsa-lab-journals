#include "conio.h"
#include "ctime"
#include <iostream>
using namespace std;

void merge(int *a, int *b, int low, int pivot, int high)
{
	int h, i, j, k;
	h = low;
	i = low;
	j = (pivot+1);

	while( ( h<=pivot ) && ( j<=high ) )
	{
		if(a[h]<=a[j])
		{
			b[i] = a[h];
			h++;
		}
		else
		{
			b[i]=a[j];
			j++;
		}
		i++;
	}

	if(h>pivot)	
	{
		for(k=j; k<=high; k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=h; k<=pivot; k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	
	for(k=low; k<=high; k++)
	{
			a[k]=b[k];
	}
}

void mergeSort(int *a, int*b, int low, int high) 
{
	int pivot; 
	if( low<high ) 
	{ 
		pivot=( ( low+high )/2 ); 
		mergeSort( a, b, low, pivot);
		mergeSort(a, b, (pivot+1), high); 
		merge(a, b, low, pivot, high); 
	} 
}

void split( int x[], int first, int last, int &pos )
{
	int pivot = x[first];
	int left = first;
	int right = last;
	while (left < right)
	{
		while( x[right] > pivot)
		{
			right--;
		}
		while( x[left] <= pivot && left < right )
		{ 
			left++;
		}
		if (left < right)
		{
			int temp;
			temp = x[left];
			x[left] = x[right];
			x[right] = temp;
		}
	}
		x[first] = x[right];
		x[right] = pivot;
		pos = right;
}

void quickSort (int x[], int first, int last)
{
	int pos;
	if ( first < last-1)
	{
		split (x, first, last, pos);
		quickSort (x, first, (pos-1));
		quickSort (x, pos + 1, last);
	}
}

int main()
{
	int n;
	cout<<"Enter Array Size:"<<endl;
	cin>>n;
	//NOTE: Below individual arrays are declred for each sorting algorithm and then initialized with same elements to keep consistency in comparing algorithms working with same elements of array
	int *d = new int [n]; //array for merge sorting
	int *e = new int [n]; //array for quick sorting
	int *x = new int [n]; //array for merge sorting
	for(int i=0; i<n; i++) //initializing each array with same random numbers
	{
		d[i] = e[i] = (rand() % n);
	}

	//=======================================================================================
	//merge sorting
	//=======================================================================================
	cout<<endl;
	cout<<endl;
	cout<<"Merge Sort Result:"<<endl;
	cout<<"=================="<<endl;
	mergeSort(d, x, 0, n-1);
	for( int i=0; i<n; i++ )
	{
		cout<<d[i]<<"  ";
	}
	
	//=======================================================================================
	//quick sorting
	//=======================================================================================
	cout<<endl;
	cout<<endl;
	cout<<"Quick Sort Result:"<<endl;
	cout<<"=================="<<endl;
	quickSort(e, 0, n-1);
	for( int i=0; i<n; i++ )
	{
		cout<<e[i]<<"  ";
	}

	getch();
}
