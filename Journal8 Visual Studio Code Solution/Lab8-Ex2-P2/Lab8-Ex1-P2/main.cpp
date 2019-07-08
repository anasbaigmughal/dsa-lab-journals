#include "circularDoublyList.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	circularDoublyList c;

	c.insertBegin(1);
	c.insertBegin(2);
	c.insertBegin(3);
	c.insertBegin(4);
	c.insertBegin(5);
	c.insertBegin(6);
	c.insertBegin(7);
	c.insertBegin(8);
	c.insertBegin(9);
	c.insertBegin(10);

	cout<<"Circular Doubly Linked List State after Data Insertion:"<<endl;
	cout<<"======================================================="<<endl;
	c.display();
	cout<<endl;

	cout<<"Circular Doubly Linked List Alternate Nodes Display:"<<endl;
	cout<<"===================================================="<<endl;
	c.displayAlternate();

	getch();
}