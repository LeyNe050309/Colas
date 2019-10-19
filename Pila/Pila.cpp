#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct PILA{ 
  int valor; 
  PILA* abajo; 
};
PILA *pila=NULL; 
PILA *aux=NULL; 

int main() {
  int numero;
  cout<<"Ingrese dato: ";
  cin>>numero; 
  pila=new PILA(); 
  pila->valor=numero; 
  pila->abajo=NULL; 

  cout<<"Ingrese dato: ";
  cin>>numero; 
  aux=new PILA();  
  aux->valor=numero;  
  aux->abajo=pila; 
  pila=aux; 

  cout<<"Ingrese dato: ";
  cin>>numero; 
  aux=new PILA(); 
  aux->valor=numero; 
  aux->abajo=pila; 
  pila=aux;

  cout<<"Los datos en la lista son: "<<endl;
  cout<<pila->valor<<endl;
  cout<<pila->abajo->valor<<endl;
  cout<<pila->abajo->abajo->valor<<endl;
  
  cout<<"ELIMINANDO EL ULTIMO ELEMENTO AGREGADO A LA LISTA"<<endl;
  aux=pila; 
  pila=pila->abajo; 
  delete aux; 

  cout<<"Ahora los datos de la lista son: "<<endl;
  cout<<pila->valor<<endl;
  cout<<pila->abajo->valor<<endl;
}


