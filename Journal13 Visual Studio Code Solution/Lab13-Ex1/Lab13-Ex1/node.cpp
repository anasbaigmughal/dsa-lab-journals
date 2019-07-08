#include"node.h"

node::node()
{
	left = right = NULL;
}

node::node(char item)
{
	data = item;
	left = right = NULL;
}