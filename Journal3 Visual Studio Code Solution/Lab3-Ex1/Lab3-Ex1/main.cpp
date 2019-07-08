#include "queue.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	queue q(5);

	//after enqueing 5 elements, queue will become full at this stage
	q.enqueue(0);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3); 
	q.enqueue(4);
	//after enqueing 5 elements, queue will become full at this stage


	//first two elements of queue(0 & 1) are deleted
	q.dequeue();
	q.dequeue();
	//first two elements of queue(0 & 1) are deleted


	//two more elements are added to queue at this stage 
	q.enqueue(5);
	q.enqueue(6);
	//two more elements are added to queue at this stage 
		

	//according to FIFO structure of queue, it should display elements which are entered first (2, 3, 4, 5, 6)
	cout<<"Circular Queue Elements:"<<endl;
	q.display();
	//according to FIFO structure of queue, it should display elements which are entered first (2, 3, 4, 5, 6)


	//getFront should display the value entered first in the queue
	cout<<endl;
	cout<<endl;
	cout<<"Front Value:"<<endl<<q.dequeue();
	//getFront should display the value entered first in the queue


	//Empty Check
	cout<<endl;
	cout<<endl;
	cout<<"Empty Check Result:"<<endl;
	if(q.isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		cout<<"Queue is not Empty"<<endl;
	}
	//Empty Check
		
	getch();
}

