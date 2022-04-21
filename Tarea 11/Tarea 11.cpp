/*
  	Propósito: Arreglo Bidimensional
  
  	Autor: Fidel  Paz 
  	Fecha: 20/04/22
	Hora:
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
 	
 	int i, j;
 	int arreglos[5][5];
 	
 	
 	arreglos[0,0];
 	arreglos[0,1];
 	arreglos[0,2];
 	arreglos[0,3];
 	arreglos[0,4];
 	
	arreglos[1,0];
 	arreglos[1,1];
 	arreglos[1,2];
 	arreglos[1,3];
 	arreglos[1,4];
 	
 	arreglos[2,0];
 	arreglos[2,1];
 	arreglos[2,2];
 	arreglos[2,3];
 	arreglos[2,4];
 	
 	arreglos[3,0];
 	arreglos[3,1];
 	arreglos[3,2];
 	arreglos[3,3];
 	arreglos[3,4];
 	
 	arreglos[4,0];
 	arreglos[4,1];
 	arreglos[4,2];
 	arreglos[4,3];
 	arreglos[4,4];
 	
 	
	for ( int i = 0; i < 5; i++ )
	{
 		for (int j = 0; j < 5; j++)
		{
 	 	arreglos[i][j] = rand();
 		cout << " El total suma es: " << arreglos[i][j] << endl;
 		}
 	}
 	
 	cout << endl;
 	
 	
 	
 	return 0;
}
