/*
  	Propósito: Ejercicio de programa do while
  
  	Autor: Fidel Alfredo Paz Gómez
  	Fecha: 17/02/22
	Hora: 22:03
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int a = 2, b = 10;
 	
 	while ( a > b )
 	{
		cout << " (while) a > b " << endl;
		break;
	}
	
 	do
 	{
		cout << " (do while) a > b " << endl;
		break; 
	} while ( a > b );


	return 0;
}

