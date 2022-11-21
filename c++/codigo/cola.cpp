
#include<iostream>

#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Funciones
void menu();
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);
void mostrarCola(Nodo *&,Nodo *&,int &);

int main(){

	menu();

	system("pause");
	return 0;
}

void menu(){
	int opc;
	int dato;

	Nodo *frente = NULL;
	Nodo *fin = NULL;

	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un caracter a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. eliminado dato"<<endl;
		cout<<"Opcion: ";
		cin>>opc;

		switch(opc){
			case 1: cout<<"\nIngrese el numero para agregar a la cola: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente != NULL){
						
						suprimirCola(frente,fin,dato);
						if(frente != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3:cout<<"\nEliminando: ";
					 while(frente != NULL){
						suprimirCola(frente,fin,dato);
						cout<<dato;	
				
					}
					break;
		}
		system("cls");
	}while(opc != 4);
}

//Funcion para insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}

	fin = nuevo_nodo;
}

//Funcion para determinar si la cola esta vacia
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

//Funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;

	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
void mostrarCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;

	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	
}

