#include "stack.h"
#include "node.h"
#include <iostream>
using namespace std;

stack::stack(void)
{
	top = new node;
	top = '\0';
}

bool stack::isEmpty()
{
	if(top == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void stack::push(int value)
{
	node *ptr = new node;
	ptr->data = 0;
	ptr->next = '\0';

	ptr->data = value;

	ptr->next = top;
	top = ptr;
}

int stack::pop()
{
	if(!isEmpty())
	{
		node *temp;
		temp = top;
		int value;
		value = top->data;

		top = top->next;

		delete temp;
		return (value);
	}
	else
	{
		cout<<"SORRY!!! Stack is Empty."<<endl;
		return (-1);
	}
}

int stack::_top()
{
	if(!isEmpty())
	{
		return top->data;
	}
	else
	{
		cout<<"SORRY!!! Stack is Empty."<<endl;
		return (-1);
	}
}

void stack::display()
{
	if(!isEmpty())
	{
		node *temp;
		temp = top;

		while(temp != '\0')
		{
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
	}
	else
	{
		cout<<"SORRY!!! Stack is Empty."<<endl;
	}
}