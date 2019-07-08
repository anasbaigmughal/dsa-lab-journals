#include "binarySearchTree.h"
#include "node.h"
#include "conio.h"
#include <iostream>
using namespace std;

int main()
{
	binarySearchTree b;
	int data, choice1, choice2;

	cout<<"Enter desired operation:"<<endl;
	cout<<"1. Insert Data."<<endl;
	cout<<"2. Search Data."<<endl;
	cout<<"3. Traverse."<<endl;
	cout<<"4. Exit."<<endl;
	cin>>choice1;
	do
	{
		if(choice1 == 1)
		{
			cout<<"Enter Value to insert into BST:"<<endl;
			cin>>data;
			b.insert(data);
		}
		else if( choice1 == 2)
		{
			cout<<"Enter Value to search in BST:"<<endl;
			cin>>data;

			if( b.search(data) )
			{
				cout<<"YES. Value Found"<<endl;
			}
			else
			{
				cout<<"NO. Value Not Found"<<endl;
			}
		}
		else if( choice1 == 3 )
		{
			cout<<"PreOrder Traversal"<<endl;
			cout<<"=================="<<endl;
			b.preOrder(b.root);
			cout<<endl;
			
			cout<<"InOrder Traversal"<<endl;
			cout<<"=================="<<endl;
			b.inOrder(b.root);
			cout<<endl;

			cout<<"PostOrder Traversal"<<endl;
			cout<<"=================="<<endl;
			b.postOrder(b.root);
			cout<<endl;
		}
		else
		{
			 break;
		}
		cout<<endl;
		cout<<"Enter desired operation:"<<endl;
		cout<<"1. Insert Data."<<endl;
		cout<<"2. Search Data."<<endl;
		cout<<"3. Traverse."<<endl;
		cout<<"4. Exit."<<endl;
		cin>>choice1;
	}
	while ( choice1 != 4 );

	getch();
}