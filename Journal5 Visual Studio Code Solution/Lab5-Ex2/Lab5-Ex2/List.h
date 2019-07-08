#include "Node.h"
#pragma once
class List
{
public:
	Node *head;
public:
	List(void);
	bool isEmpty();

	void beginInsert(int);
	void midInsertWhereData(int, int); //insert to same location where data == X
	void midInsertNodeToNextWhereData(int, int); //insert Node next to location where data == X
	void midInsertWhereAddress(int, Node *); //insert to same location where address == Y 
	void midInsertNodeToNextWhereAddress(int, Node *); //insert Node next to location where address == Y
	void midInsertWhereCount(int, int); //count nodes and inset to count==Z
	void midInsertNodeToNextWhereCount(int, int); //count nodes and insert Node next to count == Z
	void endInsert(int);
	
	void findNode(int);

	int beginDelete();
	void midDelete(int); //delete node with Data Value == Z
	void endDelete();

	void displayList();
};

