/*
  	Propósito: Ejercicio con Ciclos While
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 17/02/22
	Hora: 22:49
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int a = 5, b = 2;
 	
 	while ( a > b )
 	{
		cout << " Ingrese el valor de a: ";
		cin >> a;
	}
	
	cout << endl;
	cout << " Saliste del ciclo! ";
	
	
	return 0;
}
