#include "list.h"
#include "node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void _swap(node * n1, node * n2)
{
	int temp;

	temp = n1->data;
	n1->data = n2->data;
	n2->data = temp;
}

void bubbleSort( node *head )
{
	bool swapped = false;
	node *lastPtr = NULL;
	node *temp;
	do
	{
		swapped = false;
		temp = head;
		while( temp->next != lastPtr )
		{
			if( temp->data > temp->next->data )
			{
				_swap( temp, temp->next);
				swapped = true;
			}
			temp = temp->next;
		}
		lastPtr = temp;
	}
	while( swapped );
}

void main()
{
	list l;
	int data;
	int choice;

	do
	{
		cout<<"Enter data to enter in to Linked List:  ";
		cin>>data;
		l.addNode(data);

		cout<<"Do yu want to enter more Data?"<<endl;
		cout<<"1. YES."<<endl;
		cout<<"2. NO."<<endl;
		cin>>choice;
		cout<<endl;
	}
	while( choice == 1 );

	cout<<endl;
	cout<<endl;
	cout<<"Linked List State after data insertion:"<<endl;
	cout<<"======================================="<<endl;
	l.display();

	cout<<endl;
	cout<<endl;
	cout<<"Linked List State after Sorting Data:"<<endl;
	cout<<"====================================="<<endl;
	bubbleSort( l.head );
	l.display();
	
	getch();
}