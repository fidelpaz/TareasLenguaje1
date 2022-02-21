/*
  	Propósito: Ejercicio de ciclo while inifinto
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 20/02/22
	Hora: 22:05
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int ciclos = 0;
 	
 	while ( ciclos < 1000000 )
 	{
		cout << "*";
		
		ciclos = ciclos + 1;
	}
 	
 	return 0;
}
