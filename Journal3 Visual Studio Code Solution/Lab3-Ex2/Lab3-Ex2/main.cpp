#include "queue.h"
#include "stack.h"
#include "conio.h"
#include "string.h"
#include "string"
#include <fstream>
#include <iostream>
using namespace std;

void main()
{
	//=========Module to get Palindrome Text from user and then saving to file===========
	string line_write; //string to get input and then write text to file
	cout<<"Enter Palindrome Text to write to File: "<<endl;
	getline(cin, line_write); //getting input from user
	ofstream write_file ("palindrome_text.txt"); //write file object
	write_file<<line_write; //writing string whole text to file
	write_file.close(); //closing write file

	//=========Module to read Palindrome Text from file==================================
	string line_read; //string to read text from file
	ifstream file_read ("palindrome_text.txt"); //read file object
	getline(file_read,line_read); //reading whole text from file to string
	file_read.close(); //closing read file

	//=========Module to compare Stack and Queue elements================================
	int check=1; //it will be 1 for palindrome and  0 from non-palindrome
	stack s(line_read.length()); //stack to save string text
	queue q(line_read.length()); //stack to save string text
	for(int i=0; i<line_read.length(); i++) //loop that stores each character of string to stack and queue
	{
		s.push(line_read[i]); //pushing to stack
		q.enqueue(line_read[i]); //enqueing to queue
	}
	cout<<endl;
	cout<<endl;
	cout<<"Comparing Stack and Queue elements:"<<endl;
	while(!s.isEmpty() && !q.isEmpty()) //loop that compares stack and queue elements one by one
	{
		char item_1 = q.dequeue(); //to get queue element
		char item_2 = s.pop(); //to get stack element
		if(item_1 == item_2) //if both characters matches
		{
			cout<<"'"<<item_1<<"'"<<" matches "<<"'"<<item_2<<"'"<<endl;
		}
		else
		{
			cout<<"'"<<item_1<<"'"<<" doesn't matches "<<"'"<<item_2<<"'"<<endl;
			check = 0;
		}
	}
	cout<<endl;
	cout<<endl;
	cout<<"Result:"<<endl;
	if(check == 0) //check is 0 for non-palindrome and 1 for palindrome
	{
		cout<<"Text is not Palindrome."<<endl;
	}
	else
	{
		cout<<"Text is Palindrome."<<endl;
	}
	
	getch();
}