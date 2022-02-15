/*
  	Propósito: Programa de suma pares e impares y su total
  
  	Autor: Fidel Alfredo Paz Gómez
  	Fecha: 14/02/22
	Hora: 22:38
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int pares = 0, impares = 0, total = 0;
 	
 	for ( int i = 1; i <= 10; i++)
 	{
		if ( i == 2 || i == 4 || i == 6 || i == 8 || i == 10 )
		{
			pares = pares + i;
		}
		else
			if ( i == 1 || i == 3 || i == 5 || i == 7 || i == 9 )
			{
				impares = impares + i;
			}
		cout << i << "  ";
		
		total = pares + impares; 
		
	}
	
	cout << endl;
	cout << endl;
	cout << " Total pares: " << pares << endl;
	cout << " Total impares: " << impares << endl;
	cout << " Total de ambos es: " << total << endl;
 	
 	return 0;
}
