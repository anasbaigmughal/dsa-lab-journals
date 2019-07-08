#include "student.h"

student::student()
{
	name = '\0';
	id = 0;
}

void student::setName(string a)
{
	name = a;
}

void student::setId(int  b)
{
	id = b;
}

string student::getName()
{
	return name;
}

int student::getId()
{
	return id;
}

void student::display()
{
	cout << "Name:" << name<<endl;
	cout << "ID:" << id << endl;
}