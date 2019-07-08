#include "list.h"
#include "_Node.h"
#include "doublyListStack.h"
#include <iostream>
using namespace std;

list::list(void)
{
	head = new _Node;
	head->next = '\0';
}

void list::add_Node(int data)
{
		_Node *ptr = new _Node;
		ptr->next = '\0';
		ptr->data = 0;

		ptr->data = data;

		ptr->next = head->next;
		head->next = ptr;
}

void list::display()
{
	if(head->next != '\0')
	{
		_Node *temp = head;

		cout<<"List:"<<endl;
		cout<<"====="<<endl;
		while(temp->next != '\0')
		{
			temp = temp->next;
			cout<<temp->data<<"  ";		
		}
		cout<<endl;
	}
	else
	{
		cout<<"List is Empty."<<endl;
	}
}

void list::reverse()
{
	_Node *temp = head->next;
	doublyListStack d;

	while( temp != '\0' )
	{
		d.push( temp);
		temp = temp->next;
	}

	head->next = d.pop();
	temp = head->next;

	while( !d.isEmpty() )
	{
		temp->next = d.pop();
		temp = temp->next;
	}
	temp->next = '\0';
}
