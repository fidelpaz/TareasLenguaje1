/*
  	Propósito: JUEGO DE TRIVIAS
  
  	Autor: Fidel Paz
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(8);
 	
	int opcion = 1;
	char respuesta;
	char respuestaDos, respuestaTres, respuestaCuatro, respuestaCinco, respuestaSeis, respuestaSiete, respuestaOcho;
	char respuestaNueve, respuestaDiez;
	string sn="s";
	int preguntas, segundos = 5;
		
		
		for( int i=0; i <= 21; i++ )
			cout << " \n ";
		cout << " \t\t\t\t   CARGANDO...\n ";
		for ( int i = 0; i <= 79; i++ )
			cout << "_";
		for ( int i = 0; i <= 79; i++)
		{
			cout << char(219);
			Sleep( segundos * 1000/80 );
		}		
		cout << " \nCompleto! ";
		cout << endl;
		
		system("cls");	

	    cout << "************";
		cout << "JUEGO TRIVIA";
		cout << "************";
		cout << endl;
		cout << endl;
		
		cout << "1- A jugar" << endl;
		cout << "0- Salir" << endl;
		
		cout << endl;
		cout << " Seleccione una opción: ";
		cin >> opcion;
		
		if (opcion == 0)
		{
			return 0;
		}
	
	
	for (int i = 0 ; sn=="s" || sn=="S" ; i++)
	{
	 	
	while(opcion == 1)
	{
		system("cls");
		
		cout << " 1) ¿Cuál es la ciudad menos poblada del mundo? " << endl;
		cout << " 2) ¿Cuál es la cabecera de Cortés? " << endl;
		cout << " 3) ¿Es la zona de Honduras donde estan situadas las Ruinas de Copán? " << endl;
		cout << " 4) ¿En qué país nació Lionel Messi? " << endl;
		cout << " 5) ¿Quién pintó La noche estrellada? " << endl;
		cout << " 6) ¿Cuantás peliculas de Harry Potter hay en total? " << endl;
		cout << " 7) ¿Cuál de estos no es un color primario? " << endl;
		cout << " 8) ¿Quién escribió la Odisea? " << endl;
		cout << " 9) ¿Cuál fue la primer seleccion de futbol en ganar una Copa del Mundo? " << endl;
		cout << " 10) ¿En qué año acabó la Segunda Guerra Mundial? " << endl;
		cin >> preguntas;
		
	switch (preguntas)
	{	
	case 1:
	{	
	    cout << " a) Londres " << endl;
		cout << " b) Vaticano " << endl;
		cout << " c) Houston " << endl;
		cout << " d) Madrid " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuesta;
	
		switch ( respuesta )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;	
			case 'b':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}
	case 2:
	{
		cout << " a) San Pedro Sula " << endl;
		cout << " b) Villanueva " << endl;
		cout << " c) Pimienta " << endl;
		cout << " d) Omoa " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaDos;
		
		switch ( respuestaDos )
		{
			case 'a':
			cout << " RESPUESTA CORRECTA " << endl;
			break;	
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;	
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}
	case 3:
	{
		cout << "a) Norte " << endl;
		cout << "b) Sur " << endl;
		cout << "c) Oriente " << endl;
		cout << "d) Occidente " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaTres;
		
		switch ( respuestaTres )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;	
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}		
		}
		
		system("pause");
		
		break;
	}	    
	case 4:
	{
		cout << "a) Argentina " << endl;
		cout << "b) Francia " << endl;
		cout << "c) Italia " << endl;
		cout << "d) España " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaCuatro;
		
		switch ( respuestaCuatro )
		{
			case 'a':
			cout << " RESPUESTA CORRECTA " << endl;
			break;	
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}	
	case 5:
	{
		cout << "a) Leonardo da Vinci " << endl;
		cout << "b) Pablo Picasso " << endl;
		cout << "c) Vicent van Gogh " << endl;
		cout << "d) Claude Monet " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaCinco;
		
		switch ( respuestaCinco )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;	
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}	
	case 6:
	{
		cout << "a) 5 " << endl;
		cout << "b) 6 " << endl;
		cout << "c) 8 " << endl;
		cout << "d) 10 " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaSeis;
		
		switch ( respuestaSeis )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}	
	case 7:
	{
		cout << "a) Amariilo " << endl;
		cout << "b) Violeta " << endl;
		cout << "c) Rojo " << endl;
		cout << "d) Azul " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaSiete;
		
		switch ( respuestaSiete )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'b':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}	
	case 8:
	{
		cout << "a) Platón " << endl;
		cout << "b) Homero " << endl;
		cout << "c) Aristóteles " << endl;
		cout << "d) Sócrates " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaOcho;
		
		switch ( respuestaOcho )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'b':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}	
	case 9:
	{
		cout << "a) Uruguay " << endl;
		cout << "b) Inglaterra " << endl;
		cout << "c) Argentina " << endl;
		cout << "d) Italia " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaNueve;
		
		switch ( respuestaNueve )
		{
			case 'a':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}
		}
		
		system("pause");
		
		break;
	}
	case 10:
	{
		cout << "a) En 1942 " << endl;
		cout << "b) En 1945 " << endl;
		cout << "c) En 1946 " << endl;
		cout << "d) En 1947 " << endl;
		
		cout << " Ingrese su respuesta: ";
		cin >> respuestaDiez;
		
		switch ( respuestaDiez )
		{
			case 'a':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'b':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'c':
			cout << " RESPUESTA INCORRECTA " << endl;
			break;
			case 'd':
			cout << " RESPUESTA CORRECTA " << endl;
			break;
			default:
			{
				cout << " Respuesta no valida " << endl;
				break;
			}	
		}
		
		system("pause");
		
		break;
	}	
	default:
		break;	
	}
	    break;
	}
 	    cout << "Quiere Serguir jugando (S/N) " << endl;
		cin >> sn;
// fin del ciclo for	
 	}	
 	return 0;
}
