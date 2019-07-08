#include "doublyListStack.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	doublyListStack l;

	cout<<"Stack Empty Check:"<<endl;
	cout<<"=================="<<endl;
	if( l.isEmpty() )
	{
		cout<<"Stack is Empty."<<endl;
	}
	else
	{
		cout<<"Stack is not Empty."<<endl;
	}
	cout<<endl;

	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	l.push(5);
	cout<<"Stack state after PUSH Operation:"<<endl;
	cout<<"================================="<<endl;
	l.display();
	cout<<endl;

	l.pop();
	cout<<"Stack state after POP Operation:"<<endl;
	cout<<"================================"<<endl;
	l.display();
	cout<<endl;

	cout<<"Stack Front Value:"<<endl;
	cout<<"=================="<<endl;
	cout<<l.getFront();
	cout<<endl;

	getch();
}
