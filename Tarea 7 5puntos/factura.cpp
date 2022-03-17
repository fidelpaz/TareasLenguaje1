#include <iostream>
#include "producto.h"
#include "factura.h"


using namespace std;

double subTotal;
float impuesto = 0.15;
int total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio);
	total = subTotal + ( subTotal * 0.15 );
}

void imprimirFactura()
{
	system("cls");
	cout << " ******* ";
	cout << " FACTURA ";
	cout << " ******* ";
	cout << endl;
	
	cout << " Productos " << endl;
	cout << listaProductos;
	
	cout << endl;
	cout << "subTotal: " << subTotal << endl;
	cout << " Total a pagar es: " << total << endl;
	cout << endl;
	cout << endl;
	system("pause");
}
