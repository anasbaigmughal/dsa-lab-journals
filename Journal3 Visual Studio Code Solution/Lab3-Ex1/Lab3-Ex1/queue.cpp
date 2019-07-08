#include "queue.h"
#include <iostream>
using namespace std;


queue::queue(int size)
{
	this->size = size;
	arrqueue = new int [this->size];
	rear = front = count = 0;
}

bool queue::isEmpty()
{
	if(count == 0)
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
	if(count == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void queue::enqueue(int value)
{
	if(!isFull())
	{
		arrqueue[rear] = value;
		rear = (rear+1) % size;
		count++;
	}
	else
	{
		cout<<"Circular Queue Overflow"<<endl;
	}
}

int queue::dequeue()
{
	if(!isEmpty())
	{
		int temp = arrqueue[front];
		front = (front+1) % size;
		count--;
		return temp;
	}
	else
	{
		cout<<"Queue Underflow"<<endl;
		return (-1);
	}
}

int queue::getFront()
{
	if(!isEmpty())
	{
		return arrqueue[front];
	}
	else
	{
		cout<<"Queue Empty"<<endl;
		return (-1);
	}
}

void queue::display()
{
	if(!isEmpty())
	{
		if(rear<=front)
		{
			for( int i=front; i<size; i++)
			{
				cout<<arrqueue[i]<<endl;
			}
			for( int i=0; i<=(rear-1); i++)
			{
				cout<<arrqueue[i]<<endl;
			}			
		}
		else
		{
			for( int i=front; i<rear; i++)
			{
				cout<<arrqueue[i]<<endl;
			}
		}
	}
	else
	{
		cout<<"Queue Empty"<<endl;
	}
}