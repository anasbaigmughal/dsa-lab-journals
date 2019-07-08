#pragma once
#include<iostream>
#include"node.h"
using namespace std;
class bst
{
public:
	node * root;
public:
	bst();
	bool isempty();
	void insert(int item);
	bool search(int item);
	void preTraversal(node *ptr);
	void postTraversal(node *ptr);
	void inTraversal(node *ptr);
	int leafCount(node *ptr);
	int nonLeafCount(node *ptr);
	int minValue(node *ptr);
	int maxValue(node *ptr);
};

