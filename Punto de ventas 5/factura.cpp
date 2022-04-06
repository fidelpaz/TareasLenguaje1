#include <iostream>


using namespace std;

double subTotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subTotal = subTotal + (cantidad * precio);
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
	cout << "subTotal: " << subTotal;
	cout << endl;
	cout << endl;
	system("pause");
}
