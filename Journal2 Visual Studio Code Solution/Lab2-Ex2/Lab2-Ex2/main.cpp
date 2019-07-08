#include "stack.h"
#include <fstream>
#include "string"
#include "string.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main()
{
	//=========Module to get Text from user and then saving to file===========
	string line_write; //string to get input and then write text to file
	cout<<"Enter Text to write to File: "<<endl;
	getline(cin, line_write); //getting input from user
	ofstream write_file ("anas_simple_text.txt"); //write file object
	write_file<<line_write; //writing string whole text to file
	write_file.close(); //closing write file
	
	//=========Module to read Text from file==================================
	string line_read; //string to read text from file
	ifstream file_read ("anas_simple_text.txt"); //read file object
	getline(file_read,line_read); //reading whole text from file to string
	file_read.close(); //closing read file

	//=========Module to push all Text to stack to reverse it=================
	stack s( line_read.length() ); //declaring stack of the length of the string
	for(int i=0; i<( line_read.length() ); i++) //loop to push string characters tostack one by one
	{
	s.push(line_read[i]); //pushing character from string to stack
	}

	//=========Module to save reversed text from stack to file================
	ofstream write_stack ("anas_reversed_text.txt"); //writing reversed text fromstack to file
	do
	{
	write_stack<<s.pop();
	}
	while(!s.isEmpty());
	write_stack.close(); 
	
	//=========Module to read Reversed Text from file=========================
	string reversed; //string to read reversed text from file
	ifstream read_rev ("anas_reversed_text.txt"); //reverse read file object
	getline(read_rev,reversed); //reading whole reversed text from file to string
	file_read.close(); //closing reversed read file
	cout<<endl<<"Reversed Text: "<<endl<<reversed;

	getch();
}