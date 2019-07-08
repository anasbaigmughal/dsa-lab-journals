#include "student.h"
#include <string>
using namespace std;

#pragma once
class studentList
{
public:
	student *head;
public:
	studentList(void);
	bool isEmpty();
	void addStudent(int, string, int);
	void findStudent(int);
	void display();
	void saveList();
};

