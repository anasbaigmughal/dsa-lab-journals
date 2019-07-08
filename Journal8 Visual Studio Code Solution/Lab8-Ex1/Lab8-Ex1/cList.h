#include "Node.h"
#pragma once
class cList
{
public:
	Node *head;
public:
	cList(void);
	bool isEmpty();

	void beginInsert(int);
	void midInsert(int, int); //count nodes and insert Node next to count == Z
	void endInsert(int);

	void beginDelete();
	void midDelete(int); //delete node from position X
	void endDelete();

	void displaycList();
};

