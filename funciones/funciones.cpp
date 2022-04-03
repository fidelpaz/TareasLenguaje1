/*
  	Propósito: Ejercicio 28 Funciones
  
  	Autor: Fidel Alfredo Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

int sumar()
{
	return 5 + 7;
}

string nombreCompleto()
{
	string nombre = "Juan";
	string apellido = "Perez";
	
	return nombre + "  " + apellido;
}

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	int resultado = sumar();
	string nombreyApellido = nombreCompleto();
	
	cout << resultado;
 	
 	cout << endl;
 	
 	cout << nombreyApellido;
 	
 	return 0;
}
