/*
  	Propósito: Ejercicio de una factura
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 20/02/22
	Hora: 22:16
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	//Datos de entrada
 	float subTotal = 0, total = 0, impuesto = 0.15;
 	
 	
 	cout << " Ingrese el subtotal de la factura: ";
 	cin >> subTotal;
 	
 	//Proceso
 	total = subTotal + ( subTotal * 0.15 );
 	
 	//Salida
 	cout << endl;
 	cout << " Total a pagar es: " << total;
 	
 	return 0;
}
