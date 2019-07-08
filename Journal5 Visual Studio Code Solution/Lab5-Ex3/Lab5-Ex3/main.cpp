#include "List.h"
#include "conio.h"
#include "Node.h"
#include "conio.h"
#include <iostream>
using namespace std;

int maximumListValue(Node *n)
{
		int max = n->data;

		while(n->next != '\0')
		{
			n = n->next;
			if(n->data > max)
			{
				max = n->data;
			}
		
		}

		return max;
}

int countNodes(Node *n)
{
	if(n != '\0')
	{
		int count = 1; //we took count=1 because function always take first node pointer this mean it must have first node
		while(n->next != '\0')
		{
			n = n->next;
			count++;
		}
		return count;
	}
}

int findNodeCount(Node *n, int dataLocation)
{
		int count = 1; //we took count=1 because function always take first node pointer this mean it must have first node
		while(n->next != '\0' && n->data != dataLocation)
			{
				n = n->next;
				count++;
			}
				if(n->data == dataLocation) //if data is found in node in list
				{
					return count;
				}
				else
				{
					cout<<"Sorry!!! No Node found with Data Value = "<<dataLocation<<"."<<endl;
					return (-1);
				}
}

int recursiveDisplay(Node *n)
{
	if(n == '\0')
	{
		return (1);
	}
	else
	{
		cout<<n->data<<"  ";
		recursiveDisplay(n->next);	
	}
}

void swapNodes(Node *n1, Node *n2)
{
	int temp1, temp2;
	while( n1 != '\0' && n2 != '\0')
	{
		temp1 = n1->data;
		temp2 = n2->data;
		n1->data = temp2;
		n2->data = temp1;
		n1 = n1->next;
		n2 = n2->next;
	}
}

void main()
{
	List l, m;

	l.endInsert(10);
	l.endInsert(20);
	l.endInsert(30);
	l.endInsert(40);

	m.endInsert(50);
	m.endInsert(60);
	m.endInsert(70);
	m.endInsert(80);

	cout<<"LIST-1 AFTER ELEMENTS INSERTION:"<<endl;
	cout<<"================================"<<endl;
	l.displayList();

	cout<<endl;
	cout<<"Maximum value in List-1: "<<maximumListValue(l.head->next)<<endl;
	
	cout<<endl;
	cout<<"Number of Nodes in List-1: "<<countNodes(l.head->next)<<endl;
	
	cout<<endl;
	cout<<"Node Count Position in List-1: "<<findNodeCount(l.head->next, 30)<<"  (We assumed 1 for 1st Position)"<<endl;
	
	cout<<endl;
	cout<<"LIST-1 ELEMENTS DISPLAY BY RECURSION:"<<endl;
	cout<<"====================================="<<endl;
	recursiveDisplay(l.head->next);
	cout<<endl;

	cout<<endl;
	cout<<"LIST ELEMENTS BEFORE SWAPPING:"<<endl;
	cout<<"=============================="<<endl;
	cout<<"List-1:  ";
	l.displayList();
	cout<<endl;
	cout<<"List-2:  ";
	m.displayList();
	cout<<endl;

	swapNodes(l.head->next, m.head->next);

	cout<<"LIST ELEMENTS AFTER SWAPPING:"<<endl;
	cout<<"============================="<<endl;
	cout<<"List-1:  ";
	l.displayList();
	cout<<endl;
	cout<<"List-2:  ";
	m.displayList();
	cout<<endl;

	getch();
}
