/*
  	Propósito: Ejercicio de Menu con Switch
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 19/02/22
	Hora: 23:18
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
 	int opcion = 0;
 	
 	while ( true )
 	{
		system ( "cls" );
		cout << " **** " << endl;
		cout << " Menu " << endl;
		cout << " **** " << endl;
		
		cout << endl;
		cout << " 1- Cafe y Granitas " << endl;
		cout << " 2- Reposteria " << endl;
		cout << " 0- Salir " << endl;
		
		cout << " Ingrese una opción del menu: ";
		cin >> opcion;
		
		switch ( opcion )
		{
			case 1:
			{
				system ( "cls" );
				cout << " Estas en el menu de cafe y granitas " << endl;
				system ( "pause" );
				break;
			}
			case 2:
			{
				system ( "cls" );
				cout << " Estas en el menu de reposteria " << endl;
				system ( "pause" );
				break;
			}
		default:
			{
				cout << " Ingrese una opcion valida ( 0, 1, 2 ) " << endl;
				system ( "pause" );
				break;
			}	
		}
	}
	 
	cout << endl;
	cout << " Saliste del sistema ";
	 	 
	return 0;
}
