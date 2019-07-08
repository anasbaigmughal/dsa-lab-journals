#include "stack.h"
#include <fstream>
#include "string"
#include "string.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	//=========Module to get Mathematical Expression from user and then saving tofile===========
	string line_write; //string to get input and then write text to file
	cout<<"Enter Mathematical Expression: "<<endl;
	getline(cin, line_write); //getting input from user
	ofstream write_file ("anas_mathematical_expression.txt"); //write file object
	write_file<<line_write; //writing string whole text to file
	write_file.close(); //closing write file

	//=========Module to read Mathematical Expression fromfile==================================
	string line_read; //string to read text from file
	ifstream file_read ("anas_mathematical_expression.txt"); //read file object	
	getline(file_read,line_read); //reading whole text from file to string
	file_read.close(); //closing read file
	
	//=========Module to track brackets using stack==============================================
	stack s(line_read.length());
	for(int i=0; i<line_read.length(); i++)
	{
		if(line_read[i]=='(')
		{
			s.push('(');
		}
		if(line_read[i]==')')
		{
			if(  !(s.isEmpty())  ) //stack must have some elements to pop it
			{
				s.pop();
			}
			else //for invalid expression if there comes closing bracket before opening bracket then it pushes 'e' to make invalid
			{
				s.push('e'); //expression to make stack abnormal 
				s.push('e'); //expression to make stack abnormal
				s.push('e'); //expression to make stack abnormal
			}
		}
	}
	cout<<endl;
	if(s.isEmpty())
	{
		cout<<"CONGRATULATIONS!!! Valid Expression"<<endl;
	}
	else
	{
		cout<<"SORRY!!! Invalid Expression"<<endl;
	}

	getch();
}