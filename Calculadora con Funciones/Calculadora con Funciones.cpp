/*
  	Propósito: Ejercicio 31 Calculadora con Funciones
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

int sumar (int a, int b)
{
	return a + b;
}

int calculadora(int a, int b, char operador)
{
	if(operador == '+')
	{
		return sumar(a, b);
	}
}

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	int n1 = 0;
	int n2 = 0;
	char operador;
	
	cout << " Ingrese a: ";
	cin >> n1;
 	cout << " Ingrese b: ";
	cin >> n2;
	cout << " Ingrese el operador (+, -, *, /): ";
	cin >> operador;
 	
 	cout << endl;
	
	cout << " Resultado de " << n1 << operador << n2 << " es ";
	cout << calculadora(n1, n2, operador);
	 	
 	return 0;
}

