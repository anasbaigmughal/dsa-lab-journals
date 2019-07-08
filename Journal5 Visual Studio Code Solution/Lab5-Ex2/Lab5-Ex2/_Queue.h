#include "List.h"
#include "conio.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;
#pragma once
class _Queue
{
private:
	List l;
public:
	_Queue(void);
	bool isEmpty();
	int getFront();
	void enqueue(int);
	int dequeue();
	void displayQueue();

};

