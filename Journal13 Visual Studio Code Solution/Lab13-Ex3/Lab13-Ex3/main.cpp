#include<iostream>
#include<conio.h>
#include"bst.h"
#include"student.h"
#include"node.h"
#include"conio.h"
using namespace std;

void main()
{
	string name, search;
	student s;
	bst t;
	int choice1, choice2;

	do
	{
		cout<<endl;
		cout<<"Enter desired operation:"<<endl;
		cout<<"1. Add Student."<<endl;
		cout<<"2. Search Student."<<endl;
		cin>>choice1;
		if(choice1 == 1)
		{
			cout<<endl;
			cout<<"Enter Student Name:"<<endl;
			cin>>name;
			s.setName(name);
			t.insert(s);
		}
		else if(choice1 == 2)
		{
			cout<<endl;
			cout<<"Enter Search Student Name:"<<endl;
			cin>>search;
			s.setName(search);
			if(t.search(s))
			{
				cout<<"Student Found."<<endl;
			}
			else
			{
				cout<<"Student Not Found."<<endl;
			}
		}
		else
		{
			cout<<"Invalid Input"<<endl;
		}
		cout<<endl;
		cout<<"Do you want to do operation again?"<<endl;
		cout<<"1. YES."<<endl;
		cout<<"2. NO."<<endl;
		cin>>choice2;
	}
	while(choice2 == 1);

	getch();
}