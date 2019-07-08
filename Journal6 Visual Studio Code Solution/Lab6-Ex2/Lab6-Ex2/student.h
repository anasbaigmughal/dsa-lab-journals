#include <string>
using namespace std;

#pragma once
class student
{
public:
	int id;
	string name;
	int age;
	student *next;
public:
	student(void);
};

