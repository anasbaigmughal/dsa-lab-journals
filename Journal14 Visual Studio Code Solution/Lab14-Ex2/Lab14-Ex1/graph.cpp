#include "graph.h"
#include <iostream>
using namespace std;

graph::graph( int vertexCount )
{
	this->vertexCount = vertexCount;
	adjacencyMatrix = new bool*[vertexCount];
	for( int i=0; i<vertexCount; i++) 
	{
		adjacencyMatrix[i] = new bool[vertexCount];
		for( int j=0; j<vertexCount; j++)
		{
			adjacencyMatrix[i][j] = false;
		}
	}
}

void graph::addEdge(int i, int j)
{ 
	if (i >= 0 && i < vertexCount && j > 0 && j < vertexCount ) 
	{ 
		adjacencyMatrix[i][j] = true; 
		adjacencyMatrix[j][i] = true; 
	} 
}

void graph::removeEdge(int i, int j) 
{ 
	if( i >= 0 && i < vertexCount && j > 0 && j < vertexCount ) 
	{ 
		adjacencyMatrix[i][j] = false; 
		adjacencyMatrix[j][i] = false; 
	} 
}

bool graph::isEdge(int i, int j) 
{ 
	if( i >= 0 && i < vertexCount && j > 0 && j < vertexCount ) 
	{
		return adjacencyMatrix[i][j]; 
	}
	else 
	{
		return false; 
	} 
}
graph::~graph() 
{ 
	for( int i=0; i<vertexCount; i++) 		
	{
		delete[] adjacencyMatrix[i]; 
		delete[] adjacencyMatrix; 
	}
}