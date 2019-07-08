#include "node.h"

#pragma once
class list
{
public:
	node *head;
public:
	list(void);
	bool isEmpty();
	void addNode(int);
	void display();
};

