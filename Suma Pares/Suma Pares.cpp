/*
  	Propósito: Programa de suma pares
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 13/02/22
	Hora: 23:03
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int pares = 0;
 	
 	for ( int i = 1; i <= 10; i++)
 	{
		if ( i == 2 || i == 4 || i == 6 || i == 8 || i == 10 )
		{
			pares = pares + i;
		}
		cout << i << "  ";
	}
	
	cout << endl;
	cout << endl;
	cout << " Total pares: " << pares;
 	
 	return 0;
}
