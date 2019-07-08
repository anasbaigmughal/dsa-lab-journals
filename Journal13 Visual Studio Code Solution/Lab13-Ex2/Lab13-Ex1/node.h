#pragma once
#include<iostream>
using namespace std;
class node
{
public:
	node *Left;
	node *Right;
	int data;
	node();
	node(int item);
};

