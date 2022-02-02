/*
  	Propósito: Programa que suma, resta, multiplica y divide.
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 28/01/2022
	Hora: 21:36
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	int a = 0, b = 0;
	
 	cout << " Ingrese el valor de a: ";
 	cin >> a;
 	
 	cout << " Ingrese el valor de b:";
 	cin >> b;
 	cout << endl;
 	
 	cout << " El resultado de la suma es :" << a + b <<endl;
 	cout << " El resultado de la resta es :" << a - b <<endl;
 	cout << " El resultado de la multiplicación es :" << a * b <<endl;
 	cout << " El resultado de la division es :" << a / b <<endl;
 	
 	return 0;
}
