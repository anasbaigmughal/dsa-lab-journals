#pragma once
class queue
{
private:
	int *arrqueue;
	int front, rear, size;
public:
	queue(int);
	bool isEmpty();
	bool isFull();
	void enqueue(int);
	int dequeue();
	int getFront();
	void display();
};