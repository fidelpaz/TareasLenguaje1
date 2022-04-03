/*
  	Propósito:
  
  	Autor:
  	Fecha:
	Hora:
*/

#include <iostream>
#include <cmath>

using namespace std;

int sumar ( int a, int b )
{
	return a + b;
}

int main()
{
 	setlocale(LC_CTYPE, "Spanish");
 	cout.precision(12);
 	
	system("cls");
 	
 	cout << sumar( 5, 7 );
 	cout << endl;
 	cout << sumar( 15, 7 );
 	cout << endl;
 	cout << sumar( 5, 71 );
 	cout << endl;
 	cout << sumar( 9, 8 );
 	cout << endl;
 	
 	
 	return 0;
}

