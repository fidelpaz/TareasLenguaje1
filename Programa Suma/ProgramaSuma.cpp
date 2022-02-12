/*
  	Propósito: Programa suma
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 11/02/22
	Hora: 10:46
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	//Datos de entrada
 	int a = 0;
 	int b = 0;
 	int resultado = 0;
 	
 	cout << " Ingrese el valor de a: ";
 	cin >> a;
 	
 	cout << endl;
 	
 	cout << " Ingrese el valor de b: ";
 	cin >> b;
 	
 	//Proceso
 	resultado = a + b;
 	
 	//Salida
 	cout << " La suma de a + b es: " << resultado;
 	
 	return 0;
}
