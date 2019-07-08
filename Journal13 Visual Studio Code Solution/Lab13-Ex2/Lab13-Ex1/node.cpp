#include"node.h"

node::node()
{
	Left = Right = NULL;
}

node::node(int item)
{
	data = item;
	Left = Right = NULL;
}