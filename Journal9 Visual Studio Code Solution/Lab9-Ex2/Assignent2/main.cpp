#include "node.h"
#include "conio.h"
#include <iostream>
const int size=11;
using namespace std;

node *hashTable[11];

int hashFunction( int key )
{
	return ( key%size );
}

void initialize()
{
	for( int i=0; i<size; i++ )
	{
		hashTable[i] = NULL;
	}
}

void insert( int key )
{
	node *temp = hashTable[ hashFunction( key ) ];

	node *ptr = new node;
	ptr->key = 0;
	ptr->next = NULL;

	ptr->next = temp;

	ptr->key = key;

	hashTable[ hashFunction( key ) ] = ptr; //inserting new head
}
	
void display()
{
	for( int i=0; i<11; i++ )
	{
		node *temp = hashTable[i];
		if(hashTable[i] != NULL) //if not empty list
		{
			while(temp != NULL)
			{
				cout<<temp->key<<" ";
				temp= temp->next;
			}
			cout<<endl;
		}
	}
};

void search( int v )
{
	int index = hashFunction( v );
	bool valueFound = false;
	if(index < 11)
	{
		node *temp = hashTable[index];
		while( temp != NULL )
		{
			if( temp->key == v )
			{
				cout<<"Yes Value found in Hash Table."<<endl;
				valueFound = true;
				return;
			}
			temp = temp->next;
		}
	}
	if( valueFound != true )
	{
		cout<<"SORRY!!! Value not found in Hash Table."<<endl;
	}
}

void main()
{
	initialize();
	cout<<"Inserting elements to Hash Table..."<<endl<<endl;

	insert(0);
	insert(0);
	insert(1);
	insert(1);
	insert(1);
	insert(3);
	insert(4);
	insert(5);

	cout<<"Hash Table State:"<<endl;
	cout<<"================="<<endl;
	display();
	
	cout<<endl;
	cout<<"Search Value Result:"<<endl;
	cout<<"===================="<<endl;
	search(1);
	getch();
}