/*
  	Propósito: Ejercicio de Menu
  
  	Autor: Fidel Alfredo Paz Gomez
  	Fecha: 18/02/22
	Hora: 21:28
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
		
		if ( opcion == 1 )
		{
			system ( "cls" );
			cout << " Estas en el menu de cafe y granitas " << endl;
			system ( "pause" );
		}
		
		if ( opcion == 2 )
		{
			system ( "cls" );
			cout << " Estas en el menu de reposteria " << endl;
			system ( "pause" );
		}
		
		if ( opcion == 0 )
		{
			break;
		}
	}
	 
	cout << endl;
	cout << " Saliste del sistema ";
	 	 
	return 0;
}
