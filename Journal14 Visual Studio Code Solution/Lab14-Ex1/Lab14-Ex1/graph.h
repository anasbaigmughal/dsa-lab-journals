#include "adjList.h"

#pragma once
class graph
{
public:
	int v;
	adjList *arr;
public:
	graph( int v );
	node * newAdjListNode( int d );
	void addEdge( int src, int dest );
	void printGraph();
};

