#include "_Queue.h"
#include "List.h"
#include "conio.h"
#include "Node.h"
#include <iostream>
using namespace std;

_Queue::_Queue(void)
{
}

void _Queue::enqueue(int value)
{
	l.endInsert(value);
}

int _Queue::dequeue()
{
	return ( l.beginDelete() );
}

void _Queue::displayQueue()
{
	l.displayList();
}

bool _Queue::isEmpty()
{
	return ( l.isEmpty() );
}

int _Queue::getFront()
{
	int value;
	value = l.head->next->data;
	return value;
}