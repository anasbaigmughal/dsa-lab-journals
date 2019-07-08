#pragma once
#include "stack.h"
#include "node.h"
#include <iostream>
using namespace std;

class stack
{
public:
	node *top;
public:
	stack(void);
	bool isEmpty();
	void push(int);
	int pop();
	int _top();
	void display();
};

