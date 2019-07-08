#pragma once
#include<iostream>
using namespace std;
class node
{
public:
	node *left;
	node *right;
	char data;
public:
	node();
	node(char item);
};

