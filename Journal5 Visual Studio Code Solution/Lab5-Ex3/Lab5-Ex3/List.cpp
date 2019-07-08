#include "List.h"
#include "conio.h"
#include "Node.h"
#include <iostream>
using namespace std;

List::List(void)
{
	head = new Node;
	head->next = '\0';
}

bool List::isEmpty()
{
	if(head->next == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void List::beginInsert(int value) //inserts node at beginning
{
	Node *ptr;
	ptr = new Node;
	ptr->data = 0;
	ptr->next = '\0';
	
	ptr->data = value;

	ptr->next = head->next;
	head->next = ptr;
}

void List::midInsertWhereData(int value, int dataLocation) //insert to same location where data == X
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head->next;

		while(tempPtr->data != dataLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
		}
			if(tempPtr->data == dataLocation) //if data is found in node in list
			{
				tempPtr->data = value;
			}
			else
			{
				cout<<"Sorry!!! No Node found with Data Value = "<<dataLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No value found-List is empty"<<endl;
	}
}

void List::midInsertNodeToNextWhereData(int value, int dataLocation) //insert Node next to location where data == X
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;

		while(tempPtr->data != dataLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
		}
			if(tempPtr->data == dataLocation) //if data is found in node in list
			{
				Node *ptr;
				ptr = new Node;
				ptr->data = 0;
				ptr->next = '\0';
			
				ptr->data = value;
				ptr->next = tempPtr->next;
				tempPtr->next = ptr;
			}
			else
			{
				cout<<"Sorry!!! No Node found whith Data Value = "<<dataLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No value found-List is empty"<<endl;
	}
}

void List::midInsertWhereAddress(int value, Node *addressLocation) //insert to same location where address == Y 
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;
		int check=0;

		while(tempPtr->next != addressLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
		}
			if(tempPtr->next == addressLocation) //if address is found in node in list
			{
				addressLocation->data = value;
			}
			else
			{
				cout<<"Sorry!!! No Node found with Address = "<<addressLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No address found-List is Empty"<<endl;
	}
}

void List::midInsertNodeToNextWhereAddress(int value, Node *addressLocation) //insert Node next to location where address == Y
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;

		while(tempPtr != addressLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
		}
			if(tempPtr == addressLocation ) //if address is found in node in list
			{
				Node *ptr;
				ptr = new Node;
				ptr->data = 0;
				ptr->next = '\0';
	
				ptr->data = value;
				ptr->next = addressLocation->next;
				addressLocation->next = ptr;
			}
			else
			{
				cout<<"Sorry!!! No Node found whith Address = "<<addressLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No address found-List is empty"<<endl;
	}
}

void List::midInsertWhereCount(int value, int countLocation) //count Nodes and insert data to count==Z
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;
		int count = 0;

		while(count != countLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
			count++;
		}
			if(count == countLocation) //if count position is found in list
			{
				tempPtr->data = value;
			}
			else
			{
				cout<<"Sorry!!! No Node found at Count = "<<countLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No count ound-List is empty"<<endl;
	}

}

void List::midInsertNodeToNextWhereCount(int value, int countLocation) //count Nodes and insert Node next to count==Z)
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;
		int count = 0;

		while(count != countLocation && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
			count++;
		}
			if(count == countLocation) //if count position is found in list
			{
				Node *ptr;
				ptr = new Node;
				ptr->data = 0;
				ptr->next = '\0';
	
				ptr->data = value;
				ptr->next = tempPtr->next;
				tempPtr->next = ptr;
			}
			else
			{
				cout<<"Sorry!!! No Node found at Count = "<<countLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! No data inserted-No count found-List is empty"<<endl;
	}
}

void List::endInsert(int value)
{
	Node *tempPtr;
	tempPtr = head;

	while(tempPtr->next != '\0')
	{	
		tempPtr = tempPtr->next;	
	}

	Node *ptr;
	ptr = new Node;
	ptr->data = 0;
	ptr->next = '\0';

	ptr->data = value;

	ptr->next = tempPtr->next;
	tempPtr->next = ptr;
}

void List::findNode(int value)
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;
		int count = 0;

		while(tempPtr->data != value && tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
			count++;
		}
			if(tempPtr->data == value) //if data is found in node in list
			{
				cout<<"NODE FIND RESULT:"<<endl;
				cout<<"================="<<endl;
				cout<<"Node Address: "<<tempPtr<<endl;
				cout<<"Node Data Value: "<<tempPtr->data<<endl;
				cout<<"Node Count Postion: "<<count<<endl;
			}
			else
			{
				cout<<"Sorry!!! No Node found with Data Value = "<<value<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! List is empty."<<endl;
	}
}

void List::beginDelete()
{
	if(!isEmpty())
	{
		head = head->next;
	}
	else
	{
		cout<<"Sorry!!! List is empty."<<endl;
	}
}

void List::midDelete(int dataLocation)
{
	if(!isEmpty())
	{
		Node *predPtr;
		Node *tempPtr;
		predPtr = head;
		tempPtr = head;

		while(tempPtr->data != dataLocation && tempPtr->next != '\0')
		{
			predPtr = tempPtr;
			tempPtr = tempPtr->next;
		}
			if(tempPtr->data == dataLocation) //if data is found in node in list
			{
				predPtr->next = tempPtr->next;
			}
			else
			{
				cout<<"Sorry!!! No Node found with Data Value = "<<dataLocation<<"."<<endl;
			}
	}
	else
	{
		cout<<"Sorry!!! List is empty."<<endl;
	}
}

void List::endDelete()
{
	if(!isEmpty())
	{
		
		Node *tempPtr;
		Node *predPtr;
		tempPtr = head;
		predPtr = head;

		while(tempPtr->next != '\0')
		{
			predPtr = tempPtr;
			tempPtr = tempPtr->next;
		}

		predPtr->next = '\0';
	}
	else
	{
		cout<<"Sorry!!! List is Empty."<<endl;
	}

}

void List::displayList()
{
	if(!isEmpty())
	{
		Node *tempPtr;
		tempPtr = head;

		while(tempPtr->next != '\0')
		{
			tempPtr = tempPtr->next;
			cout<<tempPtr->data<<"  ";		
		}
		cout<<endl;
	}
	else
	{
		cout<<"Sorry!!! List is Empty."<<endl;
	}
}