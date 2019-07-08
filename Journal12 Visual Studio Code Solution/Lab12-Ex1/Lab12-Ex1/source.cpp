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
	cout<<"3. Exit."<<endl;
	cin>>choice1;
	do
	{
		if(choice1 ==1)
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
		else
		{
			 break;
		}
		cout<<endl;
		cout<<"Enter desired operation:"<<endl;
		cout<<"1. Insert Data."<<endl;
		cout<<"2. Search Data."<<endl;
		cout<<"3. Exit."<<endl;
		cin>>choice1;
	}
	while ( choice1 != 3 );

	getch();
}