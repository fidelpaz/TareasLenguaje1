/*
  	Propósito: Ejercicio 39 Modulacion
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

extern int sumar(int a, int b);


int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	system("cls");
	
 	cout << sumar(5, 7);
 	cout << endl;
 	
 	return 0;
}

