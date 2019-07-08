#include "queue.h"
#include "conio.h"
#include <iostream>
using namespace std;

void  main()
{
	queue q(10); //queue of 10 elements

	q.enqueue(6);
	q.enqueue(8);
	q.enqueue(5);
	q.enqueue(-5);
	q.enqueue(0); 
	q.enqueue(4);

	cout<<"Previous Version of Queue:"<<endl;
	q.display();

	q.dequeue(); //dequeuing element

	cout<<endl;
	cout<<endl;
	cout<<"Latest Version of Queue:"<<endl;
	q.display();

	getch();
}