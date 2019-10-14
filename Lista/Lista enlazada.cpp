#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int valor;
	struct Nodo *puntero;
};
void menu();
void insertar(Nodo*&,int );
void mostrar(Nodo*);
void eliminar(Nodo *&, int);

Nodo *Lista=NULL;
int main(){
    menu();	
	getch();
	return 0;
}
void insertar(Nodo *&Lista, int dato){
	Nodo *nodonuevo = new Nodo();
	nodonuevo->valor=dato;
	
	Nodo *aux=Lista;
	Nodo *aux2;
	
	while((aux!=NULL)&&(aux->valor<dato)){
	    aux2=aux;
	    aux=aux->puntero;
    }
    
	if(Lista==aux){
	    Lista=nodonuevo;
    }
    
    else{
    	aux2->puntero=nodonuevo;
	}
	nodonuevo->puntero =aux;
    
    cout<<dato<<" "" ""Agregado con exito"<<endl;
}

void mostrar(Nodo *Lista){
	Nodo *inicio=new Nodo();
	inicio=Lista;
	
	while(inicio!=NULL){
		cout<<inicio->valor<<"-";
		inicio=inicio->puntero;
	}
}
	
void menu(){
	int option, valor;
	
	do{
		cout<<":-:-:-:MENU DE LISTA ENLAZADA:-:-:-:"<<endl;
		cout<<"Elija la opcion que desee realizar."<<endl;
		cout<<"1. Agregar elementos a la lista. "<<endl;
		cout<<"2. Mostrar elementos de la lista. "<<endl;
		cout<<"3. Eliminar un elemento de la lista. "<<endl;
		cout<<"4. Salir."<<endl;
		cin>>option;
		
		switch(option){
			case 1:
				cout<<"Ingrese el dato que desea agregar a la lista"<<endl;
				cin>>valor;
				insertar(Lista,valor);
			break;
			
			case 2:
				cout<<"Los valores de la lista son: "<<endl;
				mostrar(Lista);
				cout<<" "<<endl;
			break;	
			
			case 3:
				cout<<"Ingrese el dato que desea eliminar"<<endl;
				cin>>valor;
				eliminar(Lista,valor);
			break;		
		}
	}while(option !=4);
}

void eliminar(Nodo *&Lista,int n){
	if (Lista != NULL){
		Nodo *borrar;
		Nodo *val_ant=NULL;
		
		borrar=Lista;
		
	while((borrar!=NULL)&&(borrar->valor!=n)){
		val_ant=borrar;
		borrar=borrar->puntero;
	}
	if (val_ant==NULL){
		Lista=Lista->puntero;
		delete borrar;
	}
	else {
		val_ant->puntero =borrar->puntero;
		delete borrar;
	}
	}	
}
