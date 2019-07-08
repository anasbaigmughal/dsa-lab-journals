#pragma once
#include<iostream>
#include<string>
using namespace std;

class student
{	
public:
	string name;
	int id;
	student();
	void setName(string a);
	void setId(int b);
	string getName();
	int getId();
	void display();
};

