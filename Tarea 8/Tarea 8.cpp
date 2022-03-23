/*
  	Propósito: Calcular raiz cuadrada
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 23/03/22
	Hora:
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(8);
 	
	float raizCuadrada = 0, numero= 0;
	
 	cout << " RAICES CUADRADAS " << endl;
 	cout << " **************** " << endl;
 	cout << " Ingrese un número: ";
 	cin >> numero;
 	
 	cout <<endl;
 	
	raizCuadrada = numero + raizCuadrada;
	cout << "La raiz de "<< raizCuadrada << " es "<< sqrt(raizCuadrada) <<endl;
	
 	
 	return 0;
}
