#include "adjList.h"

#pragma once
class graph
{
private:
	bool** adjacencyMatrix;
	  int vertexCount;
public:
	graph( int vertexCount );
	void addEdge( int i, int j ) ;
	void removeEdge( int i, int j );
	bool isEdge( int i, int j ) ;
	~graph();
};

