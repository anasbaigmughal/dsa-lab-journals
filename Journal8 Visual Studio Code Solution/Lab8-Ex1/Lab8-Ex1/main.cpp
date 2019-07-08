#include "cList.h"
#include "conio.h"
#include "Node.h"
#include <iostream>
using namespace std;

void main()
{
	cList l;
	
	cout<<"LINKED LIST EMPTY CEHCK RESULT:"<<endl;
	cout<<"==============================="<<endl;
	if(l.isEmpty())
	{
		cout<<"Yes. List is Empty."<<endl;
	}
	else
	{
		cout<<"No. List is not Empty"<<endl;
	}
	cout<<endl;

	cout<<"DISPLAY AFTER BEGIN NODE INSERTION:"<<endl;
	cout<<"==================================="<<endl;
	l.beginInsert(1);
	l.beginInsert(2);
	l.displaycList();
	cout<<endl;

	cout<<"DISPLAY AFTER END NODE INSERTION:"<<endl;
	cout<<"================================="<<endl;
	l.endInsert(3);
	l.endInsert(4);
	l.displaycList();
	cout<<endl;
	
	cout<<"DISPLAY AFTER-COUNTING NODES-NODE INSERTION:"<<endl; //count nodes and insert Node next to count == Z
	cout<<"============================================"<<endl;
	l.midInsert(90, 3);
	l.displaycList();
	cout<<endl;
	
	cout<<"DISPLAY AFTER-BEGIN NODE-DELETION:"<<endl;
	cout<<"=================================="<<endl;
	l.beginDelete();
	l.displaycList();
	cout<<endl;

	cout<<"DISPLAY AFTER-MID NODE-DELETION:"<<endl; //delete node with Position == Z
	cout<<"================================"<<endl;
	l.midDelete(3);
	l.displaycList();
	cout<<endl;

	cout<<"DISPLAY AFTER-END NODE-DELETION:"<<endl;
	cout<<"================================"<<endl;
	l.endDelete();
	l.displaycList();
	cout<<endl;

	getch();
}