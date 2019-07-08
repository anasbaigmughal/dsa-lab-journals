#pragma once
class queue
{
private:
	char *arrqueue;
	char front, rear, size;
public:
	queue(char);
	bool isEmpty();
	bool isFull();
	void enqueue(char);
	char dequeue();
	char getFront();
	void display();
};

