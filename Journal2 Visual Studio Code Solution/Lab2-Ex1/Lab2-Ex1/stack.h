#pragma once
class stack
{
private:
	int *arrStack;
	int top;
	int size;
public:
	stack(void);
	stack(int);
	bool isEmpty();
	bool isFull();
	void push(int);
	int pop();
	int _top();
	void display();
};
