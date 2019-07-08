#include "list.h"
#include "doublyListStack.h"
#include "_Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	list l;
	l.add_Node(1);
	l.add_Node(2);
	l.add_Node(3);
	l.add_Node(4);
	l.add_Node(5);

	cout<<"BEFORE REVERSE:"<<endl;
	l.display();
	cout<<endl;
	cout<<endl;

	l.reverse();

	cout<<"AFTER REVERSE:"<<endl;
	l.display();
	cout<<endl;


	getch();
}