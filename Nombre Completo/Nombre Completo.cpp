/*
  	Propósito: Ejercicio 34 Nombre completo
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

string nombreCompleto(string nombre, string apellido)
{
	return nombre + " " + apellido;
}

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	string primerNombre = "";
	string primerApellido = "";
	
	cout << " Ingrese su primer nombre: ";
	cin >> primerNombre;
	cout << " Ingrese su primer apellido: ";
	cin >> primerApellido;
	
	cout << endl;
	
	cout << " Nombre completo: " << nombreCompleto(primerNombre, primerApellido);
 	
 	
 	return 0;
}

