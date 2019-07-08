#include "conio.h"
#include <iostream>
const int size=11;
using namespace std;

int _hash(int key)
{
	return (key%size);
};

int linearProbing( int hashTable[], int key )
{
	bool spaceFound = false; //flag is set if empty location is found in the remaining part of array or not
	for( int i=0; ( _hash( key ) + i )<size; i++ ) //checks for the empty location in the remaining half of the array
	{
		if( hashTable[ _hash( key ) + i ] == -1 ) //if empty location is found
		{
			hashTable[ _hash( key ) + i ] = key;
			spaceFound = true; //sets flag to true i.e. empty location found so no need to further check
			return( _hash( key ) + i ); //exits from loop
		}
	}
	if( spaceFound != true  ) //if empty location is not found in the remaining half of the array
	{
		for( int i=0; i< _hash(key); i++ ) //checks for the empty location in the previous half of the array
		{
			if( hashTable[ i ] ==  -1 ) //if empty location is found
			{
				hashTable[ i ] = key;
				spaceFound = true; //sets flag to true i.e. empty location found so no need to further check
				return (i);
			}
		}
	}
	if( spaceFound == false )
	{
		cout<<"ARRAY OVERFLOW!!! No space to insert new data."<<endl;
		return (-1);
	}
};

int quadraticProbing( int hashTable[], int key )
{
	int j = 0;
	bool spaceFound = false; //flag is set if empty location is found in the remaining part of array or not
	for( int i=0; ( _hash( key ) + (i*i) )<size; i++ ) //checks for the empty location in the remaining half of the array
	{
		if( hashTable[ _hash( key ) + (i*i) ] == -1 ) //if empty location is found
		{
			hashTable[ _hash( key ) + (i*i) ] = key;
			spaceFound = true; //sets flag to true i.e. empty location found so no need to further check
			return( _hash( key ) + i ); //exits from loop
		}
		j++;
	}
	if( spaceFound != true  ) //if empty location is not found in the remaining half of the array
	{
		for( int i=j; _hash(_hash( key )+(i*i)) < _hash(key); i++ ) //checks for the empty location in the previous half of the array
		{
			if( hashTable[ _hash(_hash( key )+(i*i)) ] ==  -1 ) //if empty location is found
			{
				hashTable[ _hash(_hash( key )+(i*i)) ] = key;
				spaceFound = true; //sets flag to true i.e. empty location found so no need to further check
				return (i);
			}
		}
	}
	if( spaceFound == false )
	{
		cout<<"ARRAY OVERFLOW!!! No space to insert new data."<<endl;
		return (-1);
	}
}

void main()
{
	int a[size];
	int b[size];

	for( int i=0; i<size; i++ )
	{
		a[i] = -1;
		b[i] = -1;
	}

	cout<<"Inserting following elements to Hash Tables of Size 11:"<<endl;
	cout<<"22, 30, 2, 13, 25, 24, 10, 9"<<endl;
	linearProbing( a, 20 );
	linearProbing( a, 30 );
	linearProbing( a, 2 );
	linearProbing( a, 13 );
	linearProbing( a, 25 );
	linearProbing( a, 24 );
	linearProbing( a, 10 );
	linearProbing( a, 9 );

	quadraticProbing( b, 20);
	quadraticProbing( b, 30);
	quadraticProbing( b, 2);
	quadraticProbing( b, 13);
	quadraticProbing( b, 25);
	quadraticProbing( b, 24);
	quadraticProbing( b, 10);
	quadraticProbing( b, 9);
	
	cout<<endl<<"Linear Probing Result:"<<endl;
	cout<<"======================"<<endl;
	for( int i=0; i<size; i++ )
	{
		if( a[i] == -1 )
		{
			cout<<"_ ";
		}
		else
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	cout<<endl<<"Quadratic Probing Result:"<<endl;
	cout<<"========================="<<endl;
	for( int i=0; i<size; i++ )
	{
		if( b[i] == -1 )
		{
			cout<<"_ ";
		}
		else
		{
			cout<<b[i]<<" ";
		}
	}
	getch();
}

