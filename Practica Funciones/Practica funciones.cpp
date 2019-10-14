#include<iostream>
#include<stdio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarlista(Nodo *&lista, int num);
void mostrarlista(Nodo *lista);

int main(){
	Nodo *lista=NULL;
	
	int dato;
	cout<<"Ingrese primer elemento de su lista: ";
	cin>>dato;
	cout<<"Ingrese segundo elemento de su lista: ";
	cin>>dato;
	cout<<"Ingrese tercer elemento de su lista: ";
	cin>>dato;
	agregarlista(lista,dato);
	mostrarlista(lista);
}
void agregarlista(Nodo *&lista, int num){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=num;
	
	Nodo *auxiliar1=lista;
	Nodo *auxiliar2;
	
	while((auxiliar1!=NULL) && (auxiliar1->dato<num)){
		auxiliar2=auxiliar1;
		auxiliar1=auxiliar1->siguiente;
	}
	if(lista==auxiliar1){
		lista=nuevo_nodo;
	}
	else{
		auxiliar2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=auxiliar1;
}
void mostrarlista(Nodo *lista){
	Nodo *actual=new Nodo();
	actual=lista;
	
	while(actual!=NULL){
		cout<<actual->dato;
		actual=actual->siguiente;
	}
}
