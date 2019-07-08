#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

list::list(void)
{
	head = '\0';
}
bool list::isEmpty()
{
	if(head == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void list::add(int value)
{
	node *ptr = new node;
	ptr->data = 0;
	ptr->next = '\0';

	ptr->data = value;

	ptr->next = head;
	head = ptr;
}

void list::deleteFirstHalf()
{
	if(!isEmpty())
	{
		node *temp1 = head;
		int count1 = 0;
		int half;

		while(temp1 != '\0')
		{
			count1++;
			temp1 = temp1->next;
		}

		half = (count1/2);
		
		node *temp2 = head;
		node *delTemp = '\0';
		int count2 = 0;

		while(count2 != half)
		{
			count2++;
			delTemp = temp2;
			temp2 = temp2->next;
			delete delTemp;
		}
		head = temp2;
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}

void list::displayEven()
{
	if(!isEmpty())
	{
		node *temp;
		temp = head;
		int count = 0;

		while(temp != '\0')
		{
			count++;
			if( (count%2) == 0 )
			{
				cout<<temp->data<<"  ";
			}
			temp = temp->next;
		}
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}

void list::displayList()
{
	if(!isEmpty())
	{
		node *temp;
		temp = head;

		while(temp != '\0')
		{
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
	}
	else
	{
		cout<<"SORRY!!! List is Empty."<<endl;
	}
}
