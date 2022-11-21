
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct numeros{
	int num;
	numeros *siguiente;	
};

void agregar(numeros *&pila,int n);
void retirar(numeros *&pila,int n);
void mostrar(numeros *&pila,int n);

int main()
{
	int respuesta;
	int n1;
	numeros *pila = NULL;
	
	
	
	do{
	cout << "=======MENU=======" << endl;
	cout << "QUE DESEA REALIZAR" << endl;
	cout << "1.Deseo Insertar un nuevo caracter" << endl;
	cout << "2.Deseo Mostrar datos de la pila" << endl;
	cout << "3.Deseo eliminar el ultimo elemento de la pila: " << endl;
	cout << "4.Deseo Salir del Menu" << endl;
	cout << "Su respuesta: "; cin >> respuesta;
	system("cls");
	switch(respuesta)
	{
		case 1: cout << "Recite el valor que desea agregar: "; cin >> n1;
		        agregar(pila,n1);
		        break;
		case 2: mostrar(pila,n1);
		        break;
	    case 3: retirar(pila,n1);
	            break;
	            
	    default:break;
	}
	}while(respuesta != 4);
	
	
	
	system("pause");
	return 0;
}

void agregar(numeros *&pila,int n)
{
	numeros *nuevo = new numeros();
	nuevo->siguiente = pila;
	nuevo->num = n;
	pila = nuevo;
	
	cout << "Valor agregado: " << n << endl;
}

void retirar(numeros *&pila,int n)
{
	numeros *aux = pila;
	n = aux->num;
	pila = aux->siguiente;
	delete aux;
	cout << "Valor retirado: " << n << endl;
}

void mostrar(numeros *&pila,int n)
{	
    do{
    numeros *aux = pila;
	n = aux->num;
	pila = aux->siguiente;
	delete aux;
	cout << "Valor: " << n << endl;
    }while(pila != NULL);
}
