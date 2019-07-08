#include "binarySearchTree.h"
#include "node.h"
#include <iostream>
using namespace std;

binarySearchTree::binarySearchTree(void)
{
	root = NULL;
}

bool binarySearchTree::isEmpty()
{
	return root == NULL;
}

void binarySearchTree::insert(int item)
{
	node * ptr = root;
	node * prev = 0;

	while (ptr != NULL)
	{
		prev = ptr;
		if (item <  ptr->data)
		{
			ptr = ptr->left;
		}
		else if(item > ptr->data)
			{
				ptr = ptr->right;
		}
		else
		{
			cout<<"Value already exist";return ;
		}
	}
	node * temp = new node;
	temp->data = item;
	temp->left = 0; 
	temp->right = 0;
	
	if(prev==0)
	{
		root = temp;
	}
	else if (item < prev->data)
	{
		prev->left = temp;
	}
	else
	{
		prev->right = temp; 
	}
}

bool binarySearchTree::search(int item)
{
	node * ptr = root;
	bool found = false;	

	for(;;)
	{
		if(found || ptr == NULL)
		{
				break;
		}
		if(item< ptr->data)
		{
			ptr = ptr->left;
		}
		else if (item > ptr->data)
		{
			ptr = ptr->right;
		}
		else
		{
			found = true;
		}
	}
	return found;
}