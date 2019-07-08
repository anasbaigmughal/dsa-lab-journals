#include "node.h"

#pragma once
class binarySearchTree
{
public:
	node *root;
public:
	binarySearchTree(void);
	bool isEmpty();
	void insert(int item);
	bool search(int item);
	void preOrder(node *ptr);
	void inOrder(node *ptr);
	void postOrder(node *ptr);
};

