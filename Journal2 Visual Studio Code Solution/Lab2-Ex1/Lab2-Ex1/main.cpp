#include "stack.h"
#include "conio.h"
#include <iostream>
using namespace std;
void main()
{
	int num, deci, remainder; //deci is just to store decimal no. temporarily
	stack s(100); //assumed stack of 100 int's
	cout<<"Enter Bnary Number:"<<endl;
	cin>>num;
	deci = num; //to display decimal number at the end
	do
	{
		remainder = num%2; //remainder calculation
		num = num/2;
		s.push(remainder); //pushing to stack
	}
	while(num>0);
	
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"                               OUTPUT-RESULT                                   "<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<endl;
	cout<<"Decimal Number: "<<deci;
	cout<<endl<<endl;
	cout<<"Binary Number: ";
	s.display(); //displaying data from stack i.e. binary number
	
	getch();
}