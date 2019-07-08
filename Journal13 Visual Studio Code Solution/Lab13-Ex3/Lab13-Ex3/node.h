#pragma once
#include<iostream>
#include"student.h"
using namespace std;

class node
{
public:
	node *left;
	node *right;
	student data;
	node();
};

