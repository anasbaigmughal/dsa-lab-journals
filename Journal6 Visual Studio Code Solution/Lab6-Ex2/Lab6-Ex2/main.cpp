#include "studentList.h"
#include <string>
#include "student.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	studentList l;
	int choice;
	int id;
	string name;
	int age;

	do
	{
		cout<<"Enter your desired operation:"<<endl;
		cout<<"1. ADD Student."<<endl;
		cout<<"2. SEARCH Student."<<endl;
		cout<<"3. DISPLAY Student List."<<endl;
		cin>>choice;
		cout<<endl;
		if(choice == 1)
		{
			cout<<"Enter Student ID:"<<endl;
			cin>>id;
			cout<<"Enter Student Name:"<<endl;
			cin.ignore(); //getline is having issue in while loop so that this statement is used
			getline(cin, name);
			cout<<"Enter Student Age:"<<endl;
			cin>>age;
			l.addStudent(id, name, age);
		}
		else if(choice == 2)
		{
			cout<<"Enter search Student ID:"<<endl;
			cin>>id;
			cout<<endl;
			l.findStudent(id);
			cout<<endl;
		}
		else if (choice ==3)
		{
			l.display();
			cout<<endl;
		}
	}
	while(choice == 1 || choice == 2 || choice == 3); //1 for ADD STUDENT, 2 for SEARCH STUDENT, 3 for DISPLAY STUDENT LIST



	l.saveList();


	getch();
}