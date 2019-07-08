#include "queue.h"
#include <iostream>
using namespace std;


queue::queue(char size)
{
	this->size = size;
	arrqueue = new char [this->size];
	rear = front = -1;
}

bool queue::isEmpty()
{
	if(front == rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool queue::isFull()
{
	if(rear == (size-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void queue::enqueue(char value)
{
	if(!isFull())
	{
		arrqueue [++rear] = value;
	}
	else
	{
		cout<<"Queue Overflow!!!"<<endl;
	}
}

char queue::dequeue()
{
	if(!isEmpty())
	{
		return arrqueue [++front];
	}
	else 
	{
		cout<<"Queue Empty!!!"<<endl;
		return (-1);
	}
}

char queue::getFront()
{
	if(!isEmpty())
	{
		return arrqueue [front +1];
	}
	else
	{
		cout<<"Queue Empty!!!"<<endl;
		return (-1);
	}
}

void queue::display()
{
	if(!isEmpty())
	{
		for(int  i=(front + 1); i<=rear; i++)
		{
			cout<<arrqueue[i]<<endl;
		}
	}
	else
	{
		cout<<"Queue Empty!!!"<<endl;
	}
}
