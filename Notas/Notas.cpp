/*
  	Propósito: Programa notas que cumpla con la tabla de wikipedia
  
  	Autor: Fidel Alfredo Paz Gómez
  	Fecha: 07/02/22
	Hora: 10:28
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(8);
 	
	int nota = 0;
	
	cout << " Ingrese la nota que obtuvo: ";
	cin >> nota;
	
	if ( nota >= 95 && nota <= 100 )
	{
		cout << " Obtuviste una A";
	}
 	else
 		if ( nota >= 85 && nota <= 94 )
 		{
			cout << " Obtuviste una B";
		}
		else
			if ( nota >= 75 && nota <= 94 )
			{
				cout << " Obtuviste una C";
			}
			else
				if ( nota >= 65 && nota <= 74 )
				{
					cout << " Obtuviste una D";
				}
				else
					if ( nota >= 60 && nota <= 64 )
					{
						cout << " Obtuviste una E";
					}
					else
						if ( nota >= 0 && nota < 60 )
						{
							cout << " Obtuviste una F";
						}
						else
						{
							cout << " Ingrese una nota entre 0-100 ";
						}
						
	return 0;
	
}
