#include "graph.h"
#include <iostream>
using namespace std;

graph::graph( int v )
{
	this->v = v;
	arr = new adjList [v];
	for( int i=0; i<v; ++i )
	{
		arr[i].head = NULL;
	}
}

node * graph::newAdjListNode( int dest )
{
	node *ptr = new node;
	ptr->next = NULL;
	ptr->dest = dest;

	return ptr;
}

void graph::addEdge( int src, int dest )
{
	node *ptr = newAdjListNode( dest );
	ptr->next = arr[src].head;
	arr[src].head = ptr;

	ptr = newAdjListNode( src );
	ptr->next = arr[dest].head;
	arr[dest].head = ptr;
}

void graph::printGraph()
{
	for( int V=0; V<v; ++V )
	{
		node * pCrawl = arr[V].head;
		cout<<"\n Adjacency List of Vertex "<<V<<"\n Head ";
		while( pCrawl )
		{
			cout<<"-> "<<pCrawl->dest;
			pCrawl = pCrawl->next;
		}
		cout<<endl;
	}
}