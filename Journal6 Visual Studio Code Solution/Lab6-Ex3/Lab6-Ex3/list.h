#include "node.h"
#pragma once
class list
{
public:
	node *head;
public:
	list(void);
	bool isEmpty();
	void add(int);
	void deleteFirstHalf();
	void displayEven();
	void displayList();
};

