#include "Node.h"

#pragma once
class doublyListStack
{
public:
	Node *top;
public:
	doublyListStack(void);
	bool isEmpty();
	void push(int);
	int pop();
	int getFront();
	void display();
};

