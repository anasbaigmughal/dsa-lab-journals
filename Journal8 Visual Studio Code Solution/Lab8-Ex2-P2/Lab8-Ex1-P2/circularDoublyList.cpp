#include "circularDoublyList.h"
#include "Node.h"
#include <iostream>
using namespace std;

circularDoublyList::circularDoublyList(void)
{
	head = '\0';
}

bool circularDoublyList::isEmpty()
{
	if( head == '\0' )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void circularDoublyList::insertBegin(int newVal)
{	
	Node *ptr = new Node;
	ptr->prev = '\0';
	ptr->data = 0;
	ptr->next = '\0';

	if( !isEmpty() )
	{
		ptr->data = newVal;
		ptr->next = head;
		head->prev = ptr;
		head = ptr;
	}
	else
	{
		ptr->data = newVal;
		head = ptr;
	}
}

void circularDoublyList::display()
{
	if( !isEmpty() )
	{
		Node *temp = head;

		while( temp != '\0' )
		{
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
		cout<<endl;
	}
	else
	{
		cout<<"SORRY!!! circularDoublyList is Empty."<<endl;
	}
}

void circularDoublyList::displayAlternate()
{
	if( !isEmpty() )
	{
		Node *temp = head;
		int count = 0;

		while( temp != '\0' )
		{
			count++;
			if(count%2 == 0)
			{
				cout<<temp->data<<"  ";
			}
			temp = temp->next;
		}
		cout<<endl;
	}
	else
	{
		cout<<"SORRY!!! circularDoublyList is Empty."<<endl;
	}
}