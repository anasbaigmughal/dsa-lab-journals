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

void bst::insert(student item)
{
	node * ptr = root;
	node * prev = 0;
	
	while (ptr != 0)
	{
		prev = ptr;
		if (item.getName() < ptr->data.getName())
			ptr = ptr->left;
		else if (item.getName() > ptr->data.getName())
			ptr = ptr->right;
		else {
			cout << "Student Already Exists."; return;
		}
	}

	node * temp = new node;
	temp->data = item;
	temp->left = 0;
	temp->right = 0;

	if (prev == 0)
	{
		root = temp;
	}
	else if (item.getName() < prev->data.getName())
	{
		prev->left = temp;
	}
	else
	{
		prev->right = temp;
	}
}

bool bst::search(student item)
{
	node *ptr = root;
	bool found = false;

	for (;;)
	{
		if (found || ptr == NULL)
		{
			break;
		}
		else if (item.getName() < ptr->data.getName())
		{
			ptr = ptr->left;
		}
		else if (item.getName() > ptr->data.getName())
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

void bst::preTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		ptr->data.display();
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
		ptr->data.display();
	}
}

void bst::inTraversal(node *ptr)
{
	if (ptr != NULL)
	{
		inTraversal(ptr->left);
		ptr->data.display();
		inTraversal(ptr->right);
	}
}