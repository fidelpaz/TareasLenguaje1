/*
  	Propósito: Ejercicio 46 funcion random
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	int numero = 0;
	
	//inicializa el numero random
	srand(time(NULL));
	
	for (int i = 0; i < 20; i++)
	{
		//genera un numero entre 1 y 10
		numero = rand() % 5 + 1;
		cout << " Numero al azar " << numero << endl;
		
	}
 	
 	
 	return 0;
}
