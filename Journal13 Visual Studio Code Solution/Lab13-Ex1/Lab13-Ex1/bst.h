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
	void preTraversal(node *ptr);
	void postTraversal(node *ptr);
	void inTraversal(node *ptr);
};

