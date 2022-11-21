#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void GetList(Nodo *&list,int n,int bucles);
void SetMayMe(Nodo *list);

int main()
{
	int n;
	int bucles;
	Nodo *list = NULL;	
	
	cout << "Cuantos numeros desea introducir: "; cin >> bucles;
	for(int i = 0; i < bucles ; i++)
	{
	   cout << "Recite el valor que desea introducir a la lista: "; cin >> n;
	   GetList(list,n,bucles);
	}
	
	SetMayMe(list);
	
	system("pause");
	return 0;
}

void GetList(Nodo *&list,int n,int bucles)
{
   	   Nodo *nuevo = new Nodo();
       nuevo->siguiente = NULL;
       nuevo->dato = n;
   
       Nodo *aux = list;
       Nodo *aux2;
   
       while((aux != NULL)&&(aux->dato < n))
       {
       	  aux2 = aux;
       	  aux = aux->siguiente;
	   }
       if(aux == list)
       {
     	 list = nuevo;
       }
       else
       {
     	 aux2->siguiente = nuevo;
       }
       nuevo->siguiente = aux;
	   cout << "El valor introducido es: " << n << endl;
}

void SetMayMe(Nodo *list)
{
	Nodo *mayor = new Nodo();
    mayor = list;
    
	int aux = 0;
	while(mayor != NULL)
	{
		if(mayor->dato > aux)
		{
			aux = mayor->dato;
			
		}
		
		mayor = mayor->siguiente;
	}
	cout << "El mayor de los valores es: " << aux << endl;
	cout << "El menor valor es: " << list->dato << endl;	
}
