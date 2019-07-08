#include "studentList.h"
#include "student.h"
#include <string>
#include <iostream>
using namespace std;

studentList::studentList(void)
{
	head = '\0';
}

bool studentList::isEmpty()
{
	if(head == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void studentList::addStudent(int id, string name, int age)
{
	student *ptr = new student;
	ptr->id = 0;
	ptr->name = '\0';
	ptr->age = 0;
	ptr->prev = '\0';
	ptr->next = '\0';

	ptr->id = id;
	ptr->name = name;
	ptr->age = age;

	if(!isEmpty())
	{
		ptr->next = head;
		head->prev = ptr;
		head = ptr;
	}
	else
	{
		head=ptr;
	}
}

void studentList::findStudent(string name)
{
	if(!isEmpty())
	{
		student *temp;
		temp = head;

		while(temp->name != name && temp!= '\0')
		{
			temp = temp->next;
		}

		cout<<"Student Record:"<<endl;
		cout<<"==============="<<endl;
		cout<<"Student ID: "<<temp->id<<endl;
		cout<<"Student Name: "<<temp->name<<endl;
		cout<<"Student Age: "<<temp->age<<endl;
	}
	else
	{
		cout<<"SORRY!!! Student List is Empty"<<endl;
	}
}

void studentList::display()
{
	if(!isEmpty())
	{
		student *temp;
		temp = head;

		cout<<"Student Record List:"<<endl;
		cout<<"===================="<<endl;
		while(temp != '\0')
		{
			cout<<"Student ID: "<<temp->id<<endl;
			cout<<"Student Name: "<<temp->name<<endl;
			cout<<"Student Age: "<<temp->age<<endl;
			cout<<endl;
			temp = temp->next;
		}
	}
	else
	{
		cout<<"SORRY!!! Student List is Empty"<<endl;
	}
}