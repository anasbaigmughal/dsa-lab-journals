#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;

List::List(void)
{
	head = '\0';
}

bool List::isEmpty()
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

void List::insertAfter(int oldVal, int newVal)
{
	if( !isEmpty() )
	{
		Node *ptr = new Node;
		ptr->prev = '\0';
		ptr->data = 0;
		ptr->next = '\0';

		Node *temp = head;
		while( temp->data != oldVal && temp != '\0' )
		{
			temp = temp->next;
		}

		ptr->data = newVal;
		ptr->next = temp->next;
		ptr->prev = temp;
		temp->next->prev = ptr;
		temp->next = ptr;
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}

void List::deleteNode(int value)
{
	if( !isEmpty() )
	{
		Node *temp = head;

		while( temp->data != value && temp != '\0' )
		{
			temp = temp->next;
		}

		if( temp == '\0' ) //value not found
		{
			cout<<"SORRY!!! Value not found in list."<<endl;
		}
		else //value is found
		{
			if( temp->prev == '\0' && temp->next == '\0' ) //list has one node only and that first node contains data
			{
				head = '\0';
			}
			else if( temp->prev == '\0' && temp->next != '\0' ) //first node contains data and it is not the only node
			{
				head = head->next;
				head->prev = '\0';
			}
			else if( temp->prev != '\0' && temp->next == '\0' ) //last node contains data and it is not the only node
			{
				temp->prev->next = '\0';
			}
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
		delete temp;
		}
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}

void List::insertBegin(int newVal)
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

void List::insertEnd(int newVal)
{
		Node *ptr = new Node;
		ptr->prev = '\0';
		ptr->data = 0;
		ptr->next = '\0';

		if( !isEmpty() )
		{

			Node *temp = head;

			while( temp->next != '\0' )
			{
				temp = temp->next;
			}

			ptr->data = newVal;
			ptr->prev = temp;
			temp->next = ptr;
		}
		else
		{
			ptr->data = newVal;
			head = ptr;
		}
}

void List::display()
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
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}