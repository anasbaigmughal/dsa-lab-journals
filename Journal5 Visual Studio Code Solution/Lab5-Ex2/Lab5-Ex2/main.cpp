#include "_Queue.h"
#include "List.h"
#include "conio.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	_Queue q;

	cout<<"EMPTY CHECK RESULT:"<<endl;
	cout<<"==================="<<endl;
	if(q.isEmpty())
	{
		cout<<"Yes. Queue is Empty."<<endl;
	}
	else
	{
		cout<<"No. Queue is not Empty."<<endl;
	}
	cout<<endl;

	cout<<"QUEUE STATE AFTER ENQUEUE:"<<endl;
	cout<<"=========================="<<endl;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.displayQueue();
	cout<<endl;

	cout<<"QUEUE STATE AFTER DEQUEUE:"<<endl;
	cout<<"=========================="<<endl;
	q.dequeue();
	q.displayQueue();
	cout<<endl;

	cout<<"QUEUE FRONT VALUE:"<<endl;
	cout<<"=================="<<endl;
	cout<<"Front: "<<q.getFront();
	cout<<endl;

	getch();
}