/*
  	Propósito: Ejercicio 35 FUNCIONES CON CICLOS
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

void imprimirCaracteres(char caracter, int ciclos)
{
	for (int i = 0; i < ciclos; i++)
	{
		cout << caracter;
	}
	
	cout << endl;
}

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	imprimirCaracteres('@', 10);
	imprimirCaracteres('#', 5);
	cout << " Hola Mundo " << endl;
	imprimirCaracteres('*', 1000);
 	
 	return 0;
}

