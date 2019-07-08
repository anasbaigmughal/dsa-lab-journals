#pragma once
class queue
{
public:
	int *arrqueue;
	int size, front, rear, count;
public:
	queue(int);
	bool isEmpty();
	bool isFull();
	void enqueue(int);
	int dequeue();
	int getFront();
	void display();
};

