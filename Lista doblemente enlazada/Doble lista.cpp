
#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

int main(int argc, char** argv){
	int option;
	int dato;
	//recorrer
	
	cout<<":-:-:-:MENU DE LISTA ENLAZADA:-:-:-:"<<endl;
	cout<<"Elija la opcion que desee realizar."<<endl;
	cout<<"1. Agregar elementos a la lista. "<<endl;
	cout<<"2. Mostrar elementos de la lista. "<<endl;
	cout<<"3. Eliminar un elemento de la lista. "<<endl;
	cout<<"4. Salir."<<endl;
	cin>>option;
	
	switch(option){
		case 1:
			cout<<"Ingrese el dato que desee agregar a la lista"<<endl;
			cin>>dato;
			
			void agregar(int dato){
				Nodo* Lista;
				Nodo* actual;
				Nodo* aux2;
				
			aux2=new Nodo();
			aux2->dato;
			aux2->siguiente=NULL;
			Lista=aux2;
			actual=aux2;
			
			}

			
			aux2=new Nodo();
			aux2->dato;
			aux2->siguiente=NULL;
			Lista=aux2;
			actual=aux2;
			
			aux2=new Nodo();
			aux2->dato;
			aux2->siguiente=NULL;
			actual->siguiente=aux2;
			actual=aux2;
			
			aux2=new Nodo();
			aux2->dato;
			aux2->siguiente=NULL;
			actual->siguiente=aux2;
			actual=aux2;
			
			aux2=new Nodo();
			aux2->dato;
			aux2->siguiente=NULL;
			actual->siguiente=aux2;
			actual=aux2;
			
			actual=Lista;
			
		case 2:
			cout<<"Los elementos de la lista son: "<<endl;
			while(actual->siguiente!=NULL){
			cout<<actual->dato<<" ";
			actual=actual->siguiente;
			}
			
		case 3:
		    cout<<"Ingrese el elemento que desee eliminar "<<endl;
					
	}
	getch();
	return 0;
