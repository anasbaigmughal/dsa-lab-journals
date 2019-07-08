#include "studentList.h"
#include "student.h"
#include "fstream"
#include <string>
#include <iostream>
using namespace std;

studentList::studentList(void)
{
	//head = new student;
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
	ptr->next = '\0';

	ptr->id = id;
	ptr->name = name;
	ptr->age = age;

	ptr->next = head;
	head = ptr;
}

void studentList::findStudent(int id)
{
	if(!isEmpty())
	{
		student *temp;
		temp = head;

		while(temp->id != id && temp!= '\0')
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

void studentList::saveList()
{
	//ofstream username_write("anas.txt", ios::binary); //file write mode open to store final balance
	//username_write.write(reinterpret_cast<char *>(head), sizeof(*head)); //writes object to file
	//username_write.close(); //file close

	student *lost = new student;
	//head = '\0';
	ifstream username_read("anas.txt", ios::binary); //file write mode open to store final balance
	username_read.read(reinterpret_cast<char *>(lost), sizeof(*lost)); //writes object to file
	username_read.close(); //file close


		student *temp;
		temp = lost;

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