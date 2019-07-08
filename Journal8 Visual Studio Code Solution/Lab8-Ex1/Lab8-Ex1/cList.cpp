#include "cList.h"
#include "conio.h"
#include "Node.h"
#include <iostream>
using namespace std;

cList::cList(void)
{
	head = '\0';
}

bool cList::isEmpty()
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

void cList::beginInsert(int value) //inserts node at beginning
{
	Node *ptr;
	ptr = new Node;
	ptr->data = 0;
	ptr->next = '\0';
	
	ptr->data = value;
	ptr->next = head;

	if( !isEmpty() )
	{
		Node *temp = head;
		while( temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	else
	{
		ptr->next = ptr;
	}
	head = ptr;
}

void cList::midInsert(int value, int countLocation) //count Nodes and insert Node next to count==Z
{
	if(!isEmpty())
	{
		Node *temp = head;

		for( int i=1; i<countLocation; i++ )
		{
			temp = temp->next;
			if( temp == '\0' )
			{
				cout<<"Sorry!!! No Node found at Count = "<<countLocation<<"."<<endl;
				return;
			}
		}
		Node *ptr = new Node;
		ptr->data = value;
		ptr->next = temp->next;
		temp->next = ptr;
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No count found-cList is empty"<<endl;
	}
}

void cList::endInsert(int value)
{
	Node *ptr;
	ptr = new Node;
	ptr->data = 0;
	ptr->next = '\0';

	ptr->data = value;

	if( !isEmpty() )
	{
		Node *temp = head;
		while( temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		ptr->next = head;
	}
	else
	{
		ptr->next = ptr;
		head = ptr;
	}
}

void cList::beginDelete()
{
	if(!isEmpty())
	{
		Node *temp = head;
		Node *temp1 = head;

		if( head->next == head ) //only one node in list
		{
			head = '\0';
			delete temp;
			return;
		}
		else
		{
			while( temp1->next != head )
			{
				temp1 = temp1->next;
			}
			head = temp->next;
			temp1->next = head;
			delete temp;
		}
	}
	else
	{
		cout<<"Sorry!!! cList is empty."<<endl;
	}
}

void cList::midDelete(int dataLocation)
{
	if(!isEmpty())
	{
		Node *prev;
		Node *temp;
		prev = 0;
		temp = head;

		for( int i=1; i<dataLocation; i++ )
		{
			prev = temp;
			temp = temp->next;

			if( temp == '\0' )
			{
					cout<<"Sorry!!! No Node found with Data Value = "<<dataLocation<<"."<<endl;
					return;
			}
		}

		if( prev == 0 )
		{
			this->beginDelete();
			return;
		}

		prev->next = temp->next;
		delete temp;
	}
	else
	{
		cout<<"Sorry!!! cList is empty."<<endl;
	}
}

void cList::endDelete()
{
	if(!isEmpty())
	{
		Node *temp = head;
		Node *t;

		if( head->next == head )
		{
			delete temp;
			head = '\0';
		}
		else
		{
			t = head->next;
			while( t->next != head )
			{
				t = t->next;
				temp = temp->next;
			}
			temp->next = head;
			delete t;
		}
	}
	else
	{
		cout<<"Sorry!!! cList is Empty."<<endl;
	}
}

void cList::displaycList()
{
	if(!isEmpty())
	{
		Node *temp = head;

		do
		{
			cout<<temp->data<<"  ";	
			temp = temp->next;	
		}
		while(temp != head);
		cout<<endl;
	}
	else
	{
		cout<<"Sorry!!! cList is Empty."<<endl;
	}
}