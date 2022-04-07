/*
  	Propósito: Ejercicio 50 libreria math.h
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>
#define Pi 3.1416

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	float numero = 0;
	float seno = 0;
	float coseno = 0;
	float tangente = 0;
	
	numero = 2*Pi;
	seno = sin(numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout << " numero: " << numero << endl;
	cout << " seno: " << seno << endl;
	cout << " coseno: " << coseno << endl;
	cout << " tangente: " << tangente << endl;
 	
 	
 	return 0;
}

