

#include <iostream>


using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system("cls");
	
	int opcionProducto = 0;
	
	switch (opcion)
	{
	case 1:
	{
		cout << " BEBIDAS CALIENTES " << endl;
		cout << " ***************** " << endl;
		cout << " 1- Capuccino " << endl;
		cout << " 2- Expresso " << endl;
		cout << endl;
		
		cout << " Ingrese una opción: ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		
		{
		case 1:
			agregarProducto( "1 Capuccino - L 40.00 ", 1, 40);
			break;	
		case 2:
			agregarProducto( "1 Expresso - L 30.00 ", 1, 30);
			break;			
		default:
			{
				cout << " Opcion no valida ";
				return;
				break;
			}
		}
		
		cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
		
		break;
	}
	case 2:
	{
		cout << " BEBIDAS FRIAS " << endl;
		cout << " ************* " << endl;
		cout << " 1- Pepsi " << endl;
		cout << " 2- Ice tea " << endl;
		cout << " 3- Coca Cola " << endl;
		cout << endl;
		
		cout << " Ingrese una opción: ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		
		{
		case 1:
			agregarProducto( "1 Pepsi - L 50.00 ", 1, 50);
			break;	
		case 2:
			agregarProducto( "1 Ice tea - L 20.00 ", 1, 20);
			break;
		case 3:
			agregarProducto( "1 Coca Cola - L 45.00 ", 1, 45);
			break;				
		default:
			{
				cout << " Opcion no valida ";
				return;
				break;
			}
		}
		
		cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");		
		
		break;
	}
	case 3:
	{
		cout << " REPOSTERIA " << endl;
		cout << " ********** " << endl;
		cout << " 1- Pan " << endl;
		cout << " 2- Pastel " << endl;
		cout << " 3- Galletas " << endl;
		cout << endl;
		
		cout << " Ingrese una opción: ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		
		{
		case 1:
			agregarProducto( "1 Pan - L 15.00 ", 1, 15);
			break;	
		case 2:
			agregarProducto( "1 Pastel - L 100.00 ", 1, 100);
			break;
		case 3:
			agregarProducto( "1 Galletas - L 10.00 ", 1, 10);
			break;				
		default:
			{
				cout << " Opcion no valida ";
				return;
				break;
			}
		}
		
		cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");		
		
		break;
	}
	default:
		break;
	}
}
