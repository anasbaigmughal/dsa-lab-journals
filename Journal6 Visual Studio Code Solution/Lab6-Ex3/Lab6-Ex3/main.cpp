#include "list.h"
#include "node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	list l;
	int value;
	int choice;

	do
	{
		cout<<"Enter Data to List:"<<endl;
		cin>>value;
		l.add(value);
		cout<<"Do you want to enter more Data?"<<endl;
		cout<<"1. YES."<<endl;
		cout<<"2. NO."<<endl;
		cin>>choice;
		cout<<endl;
	}
	while(choice == 1);
	
	cout<<"List state after Data Insertion:"<<endl;
	cout<<"==============================="<<endl;
	l.displayList();
	cout<<endl;
	cout<<endl;

	cout<<"List state with Even Position of Nodes:"<<endl;
	cout<<"===================================="<<endl;
	l.displayEven();
	cout<<endl;
	cout<<endl;

	cout<<"List state before First Half Deletion:"<<endl;
	cout<<"======================================"<<endl;
	l.displayList();
	l.deleteFirstHalf();
	cout<<endl;
	cout<<endl;

	cout<<"List state after First Half Deletion:"<<endl;
	cout<<"====================================="<<endl;
	l.displayList();
	cout<<endl;
	cout<<endl;

	getch();
}
