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

void binarySearchTree::preOrder(node *ptr)
{
	if(ptr != NULL)
	{
		cout << ptr->data << " ";	
		preOrder(ptr->left);
		preOrder(ptr->right);
	}

}

void binarySearchTree::inOrder(node *ptr)
{
	if(ptr != NULL)
	{
		inOrder(ptr->left);	
		cout << ptr->data << " ";	
		inOrder(ptr->right);
	
	}
}

void binarySearchTree::postOrder(node *ptr)
{
	if(ptr != NULL)
	{
		postOrder(ptr->left);
		postOrder(ptr->right);
		cout << ptr->data << " ";		
	}
}

int binarySearchTree::getLeafCount(node *ptr)
{
	if( ptr == NULL )
	{
		return 0;
	}
	else if( ptr->left == NULL && ptr->right == NULL )
	{
		return 1;
	}
	else
	{
		return ( getLeafCount( ptr->left ) + getLeafCount( ptr->right ) );
	}
}

int binarySearchTree::countAll(node *ptr)
{
	if(ptr == NULL)
	{
		return 0;	
	}
	else
	{
		return ( 1 + countAll( ptr->left ) + countAll( ptr->right )  );
	}
}

int binarySearchTree::countNonLeafNode(node *ptr)
{
	return( countAll(root) - ( 1 + getLeafCount(root->left) + getLeafCount(root->right) ) ); 
} 