/*
  	Propósito: Ejercicio de Hola con nombre
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 20/02/22
	Hora: 21:28
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	string nombre;
 	
 	cout << " Ingrese su nombre: ";
 	cin >> nombre;
 	
 	cout << endl;
 	cout << " Hola mi nombre es: " << nombre;
 	cout << endl;
 	
 	return 0;
}
