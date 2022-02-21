/*
  	Propósito: Ejercicio de variantes del ciclo For
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 20/02/22
	Hora: 21:50
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	for ( int i = 0; i < 10; i++ )
	{
		cout << i << "	";
	}
	
	cout << endl;	
 	cout << endl;
 	
 	for ( int i = 9; i >= 0; i-- )
	{
		cout << i << "	";
	}
	
	cout << endl;	
 	cout << endl;
 	
 	for ( int i = 0; i < 1000000; i++ )
	{
		cout << i << "	";
		if ( i == 115 )
		{
			break;
		}
	}
	
	cout << endl;	
 	cout << endl;
 	
 	for ( int i = 0; i < 10; i++ )
	{
		if ( i == 5 || i == 7 )
		{
			continue;
		}
		cout << i << "	";
	}
	
	cout << endl;	
 	cout << endl;
 	
 	return 0;
}

