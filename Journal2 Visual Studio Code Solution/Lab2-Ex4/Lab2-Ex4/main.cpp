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
	cout<<"Enter Postfix Expression to write to File: "<<endl;
	getline(cin, line_write); //getting input from user
	ofstream write_file ("anas_simple_text.txt"); //write file object
	write_file<<line_write; //writing string whole text to file
	write_file.close(); //closing write file
	
	//=========Module to read Text from file==================================
	string line_read; //string to read text from file
	ifstream file_read ("anas_simple_text.txt"); //read file object
	getline(file_read,line_read); //reading whole text from file to string
	file_read.close(); //closing read file
	
	//=========Module to evaluate postfix expression==========================
	stack s(line_read.length()); //declaring stack of te length of the text in a file
	for(int i=0; i<line_read.length(); i++) //loop to track each character of string one by one
	{
		if( isdigit(line_read[i]) ) //condition if the character is numeric digit
		{
			s.push( line_read[i] - '0'); //converting 'char' to 'int' and then pushing it to string
		}
		else //condition if the character is other than numeric digit
		{
			int result;
			int operand1 = s.pop();
			int operand2 = s.pop();
			switch (line_read[i]) //to track the operators
			{
			case '+': //addition
				{
				result = operand1 + operand2;
				break;
				}
			case '-': //subtraction
				{
					result = operand2 - operand1;
					break;
				}
			case '*': //multiplication
				{
					result = operand1 * operand2;
					break;
				}
			case '/': //division
				{
					result = operand1 / operand2;
					break;
				}
			case '%': //modulus
				{
					result = operand1 % operand2;
					break;
				}
			}
			s.push(result); //pusing result in to stack
		}
	}
	cout<<endl<<"Result:"<<s._top();
	
	getch();
}