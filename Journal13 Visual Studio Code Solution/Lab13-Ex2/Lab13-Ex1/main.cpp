#include"node.h"
#include"bst.h"
#include<iostream>
#include<conio.h>
using namespace std;

node* getParent(node* curr, int num)
{
	if ((curr->Left->data == num) ||(curr->Right->data == num))
		return curr;
	else if (num < curr->data)
		return getParent(curr->Left, num);
	else
		return getParent(curr->Right, num);
}

void main()
{
	int I = 0;
	bst T;
	T.insert(12);
	T.insert(34);
	T.insert(21);
	T.insert(1);
	T.insert(16);
	cout << "Tree Traversal:" << endl;
	cout << "===============" << endl;
	T.inTraversal(T.root); //traversing root
	cout<<endl;
	cout<<endl;

	cout << "Minimum Value in the Tree:" << endl;
	cout << "==========================" << endl;
	cout<<T.minValue(T.root);
	cout << endl;
	cout<<endl;
	cout << "Maximum Value in the Tree:" << endl;
	cout << "==========================" << endl;
	cout << T.maxValue(T.root);
	cout << endl;
	cout<<endl;
	cout << "Parent Node Address:" << endl;
	cout << "====================" << endl;
	cout<<getParent(T.root, 21);

	_getch();
}