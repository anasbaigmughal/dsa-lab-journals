#include "doublyListStack.h"
#include "_Node.h"
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

void doublyListStack::push(_Node * newVal)
{	
	_Node *ptr = new _Node;
	ptr->prev = '\0';
	ptr->add = '\0';
	ptr->next = '\0';

	if( !isEmpty() )
	{
		ptr->add = newVal;
		ptr->next = top;
		top->prev = ptr;
		top = ptr;
	}
	else
	{
		ptr->add = newVal;
		top = ptr;
	}
}

_Node * doublyListStack::pop()
{
	if( !isEmpty() )
	{
		_Node *temp = top;
		_Node *tempadd = top->add;
	
		if( top->next == '\0' )
		{
			top = '\0';
		}
		else
		{
			top = top->next;
			top->prev = '\0';
		}
		return (tempadd);
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
		return ('\0');
	}
}