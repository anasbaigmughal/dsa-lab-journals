#include "queue.h"
#include <iostream>
using namespace std;


queue::queue(int size)
{
	this->size = size;
	arrqueue = new int [this->size];
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

void queue::enqueue(int value)
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

int queue::dequeue()
{
	if(!isEmpty())
	{
		int min = arrqueue[0]; //declaring 1st element to minimum

		for(int i=1; i<rear; i++)
		{
			if(arrqueue[i] < min) //logic to find minimum
			{
				min = arrqueue[i];
			}
		}

		for(int j=0; j<rear; j++)
		{
			int temp = arrqueue[j];
			if(arrqueue[j] == min) 
			{
				for(int k=j; k<rear; k++) //shifting elements to left
				{
					arrqueue[k] = arrqueue[k+1];
				}
				rear--; //decrementing rear 
				return(temp); 
			}
		}
	}
	else 
	{
		cout<<"Queue Empty!!!"<<endl;
		return (-1);
	}
}

int queue::getFront()
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
		cout<<"|_";
		for(int i=(front + 1); i<=rear; i++)
		{
			cout<<"__"<<arrqueue[i]<<"__";
		}
		cout<<"_|";
	}
	else
	{
		cout<<"Queue Empty!!!"<<endl;
	}
}
