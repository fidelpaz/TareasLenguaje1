/*
  	Prop�sito: Ejercicio con Switch
  
  	Autor: Fidel Alfredo Paz G�mez
  	Fecha: 17/02/22
	Hora: 22:21
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int opcion = 0;
 	
 	cout << " Ingrese una opci�n: ";
 	cin >> opcion;
 	
 	switch ( opcion )
 	{
	case 1:
	{
 		cout << " Escogiste 1 " << endl;
 		cout << " Segunda linea opci�n 1 " << endl;
 		break;
 	}
 	case 2:
 		cout << " Escogiste 2 " << endl;
 		break;
 	case 3:
 		cout << " Escogiste 3 " << endl;
 		break;
 	default:
		cout << " Ingrese una opci�n entre 1 y 3 " << endl;
		break; 	
 	}
 	
 	
 	return 0;
}

