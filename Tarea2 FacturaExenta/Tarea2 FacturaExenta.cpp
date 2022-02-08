/*
  	Propósito: Factura con descuento para saber si esta exenta
  
  	Autor: Fidel Alfredo Paz Gómez
  	Fecha: 06/02/22
	Hora: 20:34
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
	char estaExenta;
	
	cout << " FACTURA CON DESCUENTO PARA SABER SI ESTA EXENTA " << endl;
 	cout << " Ingrese el subtotal de la factura: ";
 	cin >> subTotal;
 	
 	cout << " Ingrese el descuento (0, 10, 15, 20): ";
 	cin >> descuento;
 	
 	cout << " La factura esta exenta? s/n : ";
 	cin >> estaExenta;
 	
 	if ( estaExenta == 's' || estaExenta == 'S' )
 	{
		calculoImpuesto = 0;	
	}
	else
	if ( estaExenta == 'n' || estaExenta == 'N' )
 	{
		calculoImpuesto = (subTotal - calculoDescuento) * 0.15;
	}
	
	calculoDescuento = (subTotal * descuento) / 100;
 	total = subTotal - calculoDescuento + calculoImpuesto;
 	
 	cout << endl;
	
 	cout << " Total a pagar es: " << total;
 	
 	
 	return 0;
 	
}
