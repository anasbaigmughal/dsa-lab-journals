#include"adjList.h"
#include"graph.h"
#include"node.h"
#include"conio.h"
#include<iostream>
using namespace std;

int main()
{
	graph g(5);

	g.addEdge( 0, 1 );
	g.addEdge( 0, 2 );
	g.addEdge( 0, 3 );
	//now VERTEX 0 has 3 Edges towards  VERTEX 1, 2, 3 and also each VERTEX 1, 2, 3 has Edge towards VERTEX 0

	cout<<"Edge Check Result:"<<endl;
	cout<<"=================="<<endl;
	if( g.isEdge( 0, 2 ) )
	{
		cout<<"YES. This is Edge."<<endl;
	}
	else
	{
		cout<<"NO. This is not Edge."<<endl;
	}

	cout<<endl<<"Deleting Edge..."<<endl;
	g.removeEdge( 0, 2 );
	cout<<endl;

	cout<<"Edge Check Result After Deletion:"<<endl;
	cout<<"================================="<<endl;
	if( g.isEdge( 0, 2 ) )
	{
		cout<<"YES. This is Edge."<<endl;
	}
	else
	{
		cout<<"NO. This is not Edge."<<endl;
	}

	getch();
}