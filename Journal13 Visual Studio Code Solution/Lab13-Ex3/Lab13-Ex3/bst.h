#pragma once
#include<iostream>
#include"node.h"
#include<string>
#include"student.h"
using namespace std;

class bst
{
public:
	node * root;
public:
	bst();
	bool isempty();
	void insert(student item);
	bool search(student item);
	void preTraversal(node *ptr);
	void postTraversal(node *ptr);
	void inTraversal(node *ptr);
};

