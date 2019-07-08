#include "doublyListStack.h"
#include "Node.h"
#include <iostream>
using namespace std;

doublyListStack::doublyListStack(void)
{
	top = '\0';
}

bool doublyListStack::isEmpty()
{
	if( top == '\0' )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void doublyListStack::push(int newVal)
{	
	Node *ptr = new Node;
	ptr->prev = '\0';
	ptr->data = 0;
	ptr->next = '\0';

	if( !isEmpty() )
	{
		ptr->data = newVal;
		ptr->next = top;
		top->prev = ptr;
		top = ptr;
	}
	else
	{
		ptr->data = newVal;
		top = ptr;
	}
}

int doublyListStack::pop()
{
	if( !isEmpty() )
	{
		Node *temp = top;
		int tempData = top->data;
	
		if( top->next == '\0' )
		{
			top = '\0';
		}
		else
		{
			top = top->next;
			top->prev = '\0';
		}
		return (tempData);
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
		return (-1);
	}
}

int doublyListStack::getFront()
{
	if( !isEmpty() )
	{
		return (top->data);
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}

void doublyListStack::display()
{
	if( !isEmpty() )
	{
		Node *temp = top;

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