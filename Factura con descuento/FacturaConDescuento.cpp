/*
  	Propósito: Programa de factura con descuento
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 07/02/22
	Hora: 16:40
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	float subTotal = 0, total = 0, impuesto = 0, calculoDescuento = 0, calculoImpuesto = 0;
	int descuento = 0;
	
	cout << " Ingrese el subtotal de la factura: ";
	cin >> subTotal;
 	
 	cout << " Ingrese el descuento (0, 10, 15, 20): ";
 	cin >> descuento;
 	
 	calculoDescuento = (subTotal * descuento) / 100;
 	calculoImpuesto = (subTotal - calculoDescuento) * 0.15;
 	total = subTotal - calculoDescuento + calculoImpuesto;
 	
	cout << endl;
	
 	cout << " Total a pagar es: " << total;
 	
 	return 0;
}
