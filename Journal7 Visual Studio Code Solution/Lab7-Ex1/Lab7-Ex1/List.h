#include "Node.h"

#pragma once
class List
{
public:
	Node *head;
public:
	List(void);
	bool isEmpty();
	void insertAfter(int, int);
	void deleteNode(int);
	void insertBegin(int);
	void insertEnd(int);
	void display();
};

