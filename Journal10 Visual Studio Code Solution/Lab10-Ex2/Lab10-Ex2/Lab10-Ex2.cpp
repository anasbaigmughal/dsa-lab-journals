#include <iostream>
#include "conio.h"
using namespace std;

void selectionSort(int arr[], int size)
{
	int comparison = 0;
	int exchange = 0;
	for( int i=0; i<size; i++ )
	{
		int smallPos = i;
		int smallest = arr[i];

		for( int j=i+1; j<size; j++ )
		{
			comparison++;
			if( arr[j]<smallest )
			{
				smallPos = j;
				smallest = arr[smallPos];
				exchange++;
			}
		}
		arr[smallPos] = arr[i];
		arr[i] = smallest;
	}
	cout<<"   Exchangees made: "<<exchange<<endl;
	cout<<"   Comparisons made: "<<comparison<<endl;
}

void bubbleSort(int arr[], int size)
{
	int comparison = 0;
	int exchange = 0;
	for( int i=0; i<(size-1); i++ )
	{
		for( int j=0; j<(size-1); j++ )
		{
			comparison++;
			if( arr[j] > arr[j+1] )
			{
				exchange++;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"   Exchangees made: "<<exchange<<endl;
	cout<<"   Comparisons made: "<<comparison<<endl;
}

void insertionSort(int arr[], int size)
{
	int comparison = 0;
	int exchange = 0;
	for( int i=1; i<(size); i++ )
	{
		int temp=arr[i];
        int j=i-1;

        while((temp<arr[j]) && (j>=0))
        {
			comparison++;
            arr[j+1]=arr[j]; //moves element forward
            j=j-1;
        }

		exchange++;
        arr[j+1]=temp;  
	}
	cout<<"   Exchangees made: "<<exchange<<endl;
	cout<<"   Comparisons made: "<<comparison<<endl;
}

int main()
{
	int n;
	cout<<"Enter Number:"<<endl;
	cin>>n;
	int *bubble;
	bubble = new int [n]; //dynamic array

	int *insertion;
	insertion = new int [n]; //dynamic array

	int *selection;
	selection = new int [n]; //dynamic array

	for( int i=0; i<n; i++)
	{
		bubble[i] = insertion[i] = selection[i] = (rand() % n);
	}

	cout<<"Bubble Sorting:"<<endl;
	cout<<"==============="<<endl;
	bubbleSort(bubble, n);
	cout<<endl;
	
	cout<<"Insertion Sorting:"<<endl;
	cout<<"=================="<<endl;
	insertionSort(insertion, n);
	cout<<endl;

	cout<<"Selection Sorting:"<<endl;
	cout<<"=================="<<endl;
	selectionSort(selection, n);
	cout<<endl;
	
	cout<<"Bubble Sort Result:"<<endl;
	cout<<"==================="<<endl;
	for( int i=0; i<n; i++ )
	{
		cout<<bubble[i]<<" ";
	}
	cout<<endl<<endl;

	cout<<"Insertion Sort Result:"<<endl;
	cout<<"======================"<<endl;
	for( int i=0; i<n; i++ )
	{
		cout<<insertion[i]<<" ";
	}
	cout<<endl<<endl;

	cout<<"Selection Sort Result:"<<endl;
	cout<<"======================"<<endl;
	for( int i=0; i<n; i++ )
	{
		cout<<selection[i]<<" ";
	}

	getch();
}