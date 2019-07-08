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

void bst::preTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		cout << ptr->data << "   ";
		preTraversal(ptr->left);
		preTraversal(ptr->right);
	}
}

void bst::postTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		postTraversal(ptr->left);
		postTraversal(ptr->right);
		cout << ptr->data << "   ";
	}

}

void bst::inTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		inTraversal(ptr->left);
		cout << ptr->data << " ";
		inTraversal(ptr->right);
	}
}