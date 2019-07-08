#include "bst.h"

bst::bst()
{
	root = NULL;
}

bool bst::isempty()
{
	if (root == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void bst::insert(int item)
{
	node * ptr = root;
	node * prev = 0;

	while (ptr != 0)
	{
		prev = ptr;
		if (item <  ptr->data)
		{
			ptr = ptr->Left;
		}
		else if (item > ptr->data)
		{
			ptr = ptr->Right;
		}
		else 
		{
			cout << "Value already exist"; return;
		}
	}
	node * temp = new node;
	temp->data = item;
	temp->Left = 0;
	temp->Right = 0;

	if (prev == 0)
	{
		root = temp;
	}
	else if (item < prev->data)
	{
		prev->Left = temp;
	}
	else
	{
		prev->Right = temp;
	}
}

bool bst::search(int item)
{
	node *ptr = root;
	bool found = false;
	for (;;)
	{
		if (found || ptr == NULL)
		{			
			break;
		}
		if (item < ptr->data)
		{
			ptr = ptr->Left;
		}
		else if (item > ptr->data)
		{
			ptr = ptr->Right;
		}
		else
		{
			cout << "VALUE FOUND:" << endl;
		}
		found = true;
	}
	return found;
}

void bst::preTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		cout << ptr->data << "   ";
		preTraversal(ptr->Left);
		preTraversal(ptr->Right);

	}
}

void bst::postTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		postTraversal(ptr->Left);
		postTraversal(ptr->Right);
		cout << ptr->data << "   ";
	}

}

void bst::inTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		inTraversal(ptr->Left);
		cout << ptr->data << "   ";
		inTraversal(ptr->Right);
	}

}

int bst::leafCount(node  *ptr)
{
	int count = 0;
	if (ptr == NULL)
	{
		return 0;
	}
	else if (ptr->Left == NULL && ptr->Right == NULL)
	{
		return 1;
	}
	else
	{
		count = leafCount(ptr->Left) + leafCount(ptr->Right);
		return count;
	}
}

int bst::nonLeafCount(node *ptr)
{
	if (ptr == NULL || ptr->Left == NULL && ptr->Right == NULL)
	{
		return 0;

	}

	return 1 + nonLeafCount(ptr->Left) + nonLeafCount(ptr->Right);
}

int bst::minValue(node *ptr)
{
	while (ptr->Left != NULL)
	{	
		ptr = ptr->Left;
	}
	return(ptr->data);
}

int bst::maxValue(node *ptr)
{
	while(ptr->Right!=NULL)
	{
		ptr = ptr->Right;
	}
	return(ptr->data);
}