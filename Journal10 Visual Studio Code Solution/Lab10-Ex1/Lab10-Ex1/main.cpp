#include <iostream>
#include "conio.h"
using namespace std;

void selectionSort(int arr[], int size)
{
	for( int i=0; i<(size-1); i++ )
	{
		int smallPos = i;
		int smallest = arr[i];

		for( int j=i+1; j<size; j++ )
		{
			if( arr[j]<smallest )
			{
				smallPos = j;
				smallest = arr[smallPos];
			}
		}
		arr[smallPos] = arr[i];
		arr[i] = smallest;
	}
}

void bubbleSort(int arr[], int size)
{
	for( int i=0; i<(size-1); i++ )
	{
		for( int j=0; j<(size-1); j++ )
		{
			if( arr[j] > arr[j+1] )
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int size)
{
	for( int i=1; i<(size); i++ )
	{
		int temp=arr[i];
        int j=i-1;
 
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];    //moves element forward
            j=j-1;
        }
 
        arr[j+1]=temp;  
	}
}

int main()
{
	int a[5];
	int b[5];
	int c[5];
	cout<<"Enter ARRAY ELEMENTS:"<<endl;
	cout<<"====================="<<endl;

	for(int i=0; i<5; i++)
	{
		cout<<"Enter a["<<i<<"] value:  ";
		cin>>a[i];
		b[i] = c[i] = a[i];
		cout<<endl;
	}

	cout<<endl;
	cout<<"Bubble Sort Result:"<<endl;
	cout<<"==================="<<endl;
	bubbleSort(a, 5);
	for( int i=0; i<5; i++ )
	{
		cout<<a[i]<<" ";
	}

	cout<<endl;
	cout<<endl;
	cout<<"Insertion Sort Result:"<<endl;
	cout<<"======================"<<endl;
	insertionSort(b, 5);
	for( int i=0; i<5; i++ )
	{
		cout<<b[i]<<" ";
	}

	cout<<endl;
	cout<<endl;
	cout<<"Selection Sort Result:"<<endl;
	cout<<"======================"<<endl;
	selectionSort(c, 5);
	for( int i=0; i<5; i++ )
	{
		cout<<c[i]<<" ";
	}

	getch();
}