#include <string>
using namespace std;

#pragma once
class student
{
public:
	int id;
	string name;
	int age;
	student *prev;
	student *next;
public:
	student(void);
};

