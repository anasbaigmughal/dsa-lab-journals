#include "List.h"
#include "conio.h"
#include "Node.h"
#include <iostream>
using namespace std;

void main()
{
	List l;
	
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
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER END NODE INSERTION:"<<endl;
	cout<<"================================="<<endl;
	l.endInsert(3);
	l.endInsert(4);
	l.displayList();
	cout<<endl;
	
	cout<<"DISPLAY AFTER-MID DATA VALUE-DATA VALUE INSERTION:"<<endl; //insert Data Value to same location where data == X
	cout<<"=================================================="<<endl;
	l.midInsertWhereData(99, 3);
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER-MID DATA VALUE-NODE INSERTION:"<<endl; //insert Node next to location where data == X
	cout<<"============================================"<<endl;
	l.midInsertNodeToNextWhereData(90, 4);
	l.displayList();
	cout<<endl;
	
	cout<<"DISPLAY AFTER-MID ADDRESS-DATA VALUE INSERTION:"<<endl; //inser Data Value to same location where address == Y
	cout<<"==============================================="<<endl;
	l.midInsertWhereAddress(10, l.head->next->next);
	l.displayList();
	cout<<endl;
	
	cout<<"DISPLAY AFTER-MID ADDRESS-NODE INSERTION:"<<endl; //insert node next to location where address == Y
	cout<<"========================================="<<endl;
	l.midInsertNodeToNextWhereAddress(20, l.head->next->next );
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER-COUNTING NODES-DATA VALUE INSERTION:"<<endl;  //count nodes and insert Data Value to count==Z
	cout<<"=================================================="<<endl;
	l.midInsertWhereCount(6, 3);
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER-COUNTING NODES-NODE INSERTION:"<<endl; //count nodes and insert Node next to count == Z
	cout<<"============================================"<<endl;
	l.midInsertNodeToNextWhereCount(90, 3);
	l.displayList();
	cout<<endl;
	
	l.findNode(4);
	cout<<endl;

	cout<<"DISPLAY AFTER-BEGIN NODE-DELETION:"<<endl;
	cout<<"=================================="<<endl;
	l.beginDelete();
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER-MID NODE-DELETION:"<<endl; //delete node with Data Value == Z
	cout<<"================================"<<endl;
	l.midDelete(6);
	l.displayList();
	cout<<endl;

	cout<<"DISPLAY AFTER-END NODE-DELETION:"<<endl;
	cout<<"================================"<<endl;
	l.endDelete();
	l.displayList();
	cout<<endl;

	getch();
}
