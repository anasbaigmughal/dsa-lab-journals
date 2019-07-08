#include "Node.h"

#pragma once
class circularDoublyList
{
public:
	Node *head;
public:
	circularDoublyList(void);
	bool isEmpty();
	void insertBegin(int);
	void display();
	void displayAlternate();
};