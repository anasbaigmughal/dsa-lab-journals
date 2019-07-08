#include"node.h"
#include"bst.h"
#include"string.h"
#include"string"
#include<stack>
#include<iostream>
#include<conio.h>
using namespace std;

node* constructTree(string postfix)
{
	stack <node *>operand;

	node * t1;
	node * t2;
	
	for(int i=0; i<postfix.size(); i++)
	{
		if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' )
		{
			node *curr1 = new node;
			t2 = operand.top();
			operand.pop();
			t1 = operand.top();
			operand.pop();
			curr1->data = postfix[i]; //operator
			curr1->left = t1; //left operand
			curr1->right = t2; //right operand
			operand.push(curr1); //pushing node
		}
		else //operator
		{
			node *curr = new node;
			curr->data = postfix[i];
			curr->left = NULL;
			curr->right = NULL;
			operand.push(curr);
		}
	}
	node * finalRoot = operand.top();
	operand.pop();

	return finalRoot;
}

void main()
{
	string postfix;

	cout<<"Enter Postfix Expression:"<<endl;
	getline(cin, postfix);

	bst finalTree;
	cout<<endl;
	cout<<"Infix Notation:"<<endl;
	cout<<"==============="<<endl;
	finalTree.inTraversal(constructTree(postfix));
	
	getch();
}