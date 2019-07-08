#include "List.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	List l;
	
	cout<<"Doubly Linked List Empty Check:"<<endl;
	cout<<"==============================="<<endl;
	l.display();
	cout<<endl;

	l.insertBegin(1);
	l.insertBegin(2);
	l.insertBegin(3);
	l.insertBegin(4);
	l.insertBegin(5);
	cout<<"Doubly Linked List state after Beginning Insertion:"<<endl;
	cout<<"==================================================="<<endl;
	l.display();
	cout<<endl;

	l.insertAfter(3,6);
	cout<<"Doubly Linked List state after Mid Insertion:"<<endl;
	cout<<"============================================="<<endl;
	l.display();
	cout<<endl;

	l.insertEnd(100);
	cout<<"Doubly Linked List state after End Insertion:"<<endl;
	cout<<"============================================="<<endl;
	l.display();
	cout<<endl;

	l.deleteNode(6);

	cout<<"Doubly Linked List state after  Node Deletion:"<<endl;
	cout<<"=============================================="<<endl;
	l.display();
	cout<<endl;

	getch();
}