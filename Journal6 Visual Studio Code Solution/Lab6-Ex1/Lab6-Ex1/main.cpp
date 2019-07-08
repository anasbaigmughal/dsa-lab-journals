#include "stack.h"
#include "node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	stack s;
	int value, choice = 1;

	while(choice == 1)
	{
		cout<<"Enter value to write to Stack:"<<endl;
		cin>>value;
		s.push(value);
		cout<<"Do tou want to enter more data to Stack?"<<endl;
		cout<<"1. YES."<<endl;
		cout<<"2. NO."<<endl;
		cin>>choice;
		cout<<endl;
	}
	cout<<endl;

	cout<<"Stack Empty Check:"<<endl;
	cout<<"=================="<<endl;
	if(s.isEmpty())
	{
		cout<<"YES. Stack is empty."<<endl;
	}
	else
	{
		cout<<"NO. Stack is not empty."<<endl;
	}
	cout<<endl;

	cout<<"Stack state after DATA INSERTION:"<<endl;
	cout<<"================================="<<endl;
	s.display();
	cout<<endl;
	cout<<endl;

	s.pop();
	cout<<"Stack state after DATA DELETION:"<<endl;
	cout<<"================================"<<endl;
	s.display();
	cout<<endl;
	cout<<endl;

	cout<<"Stack Top Value:"<<endl;
	cout<<"================"<<endl;
	cout<<s._top();
	getch();
}