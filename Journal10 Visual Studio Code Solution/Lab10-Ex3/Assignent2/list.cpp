#include "list.h"
#include <math.h>  
#include <stdio.h>  
#include "node.h"
#include <iostream>
using namespace std;

list::list(void)
{
	head = NULL;
}

bool list::isEmpty()
{
	if( head == NULL ) //condition for empty list
	{
		return true;
	}
	else
	{
		return false;
	}
}

void list::addNode(int value) //logic of addNode() is based on 'insert at end'
{
	node *ptr = new node; //node creation
	ptr->data = 0;
	ptr->next = NULL;

	ptr->data = value; //assigning values

	if( isEmpty() ) //empty list
	{
		head = ptr;
	}
	else
	{
		ptr->next = head;
		head = ptr;
	}
}

void list::display() //function to display list
{
	node *temp = head;

	while ( temp != NULL ) //traverse until reached at end
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}