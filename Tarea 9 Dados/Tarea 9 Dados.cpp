/*
  	Propósito: Resultado de jugar con dos dados
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 28/03/22
	Hora: 22:45
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	srand (time(NULL));
	int dado1 = 0, dado2 = 0;
	
	for ( int i = 0; i < 3; i++ )
	{
	
 	dado1 = rand() % 6 + 1;
 	cout << " El resultado de dado 1 es: " << dado1 << endl;
 	}
 	
 	cout << endl;
 	
 	for (int j = 0; j < 3; j++)
	{
	
 	dado2 = rand() % 6 + 1;
 	cout << " El resultado de dado 2 es: " << dado2 << endl;
 	}
 	
 	return 0;
}

