#include "_Node.h"

#pragma once
class doublyListStack
{
public:
	_Node *top;
public:
	doublyListStack(void);
	bool isEmpty();
	void push( _Node * );
	_Node * pop();
};

