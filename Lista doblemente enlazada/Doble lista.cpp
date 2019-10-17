#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
int valor;
Nodo *Anterior; 
Nodo *Siguiente;
};
void agregar(int);
void mostrar();
void mostrar_an();

struct Nodo *lista=NULL;
int main(int argc, char** argv) {
int option,agreg,num;
while(option!=3){
cout<<":-:-:LISTA DOBLEMEMNTE ENLAZADA:-:-:"<<endl;
cout<<"1.- Ingresar valores de la lista"<<endl;
cout<<"2.- Mostrar los valores de la lista"<<endl;
cout<<"3.- Salir"<<endl;

cin>>option;

switch (option){
    case 1:
        cout<<"Ingrese el numero de datos que desea agregar"<<endl;
        cin>>num;
        for (int i=1;i<=num;i++){
        cout<<"Ingrese los datos"<<endl;
        cin>>agreg;
        agregar(agreg);
}
        break;
    case 2:
        cout<<"Mostrar los datos de la lista"<<endl;
        cout<<" "" "<<endl;
        
		mostrar();
        cout<<" "" "<<endl;
		
		mostrar_an();
        cout<<" "" "<<endl;

        break;

    case 3:
        cout<<"Salir";
        default:
        cout<<"Gracias por usar este programa"<<endl;
        break;
}
}
    return 0;
}
void agregar(int agreg)
{
    Nodo *nuevo= new Nodo;
    nuevo->Siguiente=NULL;
    nuevo->Anterior=NULL;
    nuevo->valor=agreg;
    if(lista==NULL)lista=nuevo;
    else{
    Nodo *aux=lista;
    while(aux->Siguiente!=NULL){
    aux=aux->Siguiente;
}
    aux->Siguiente=nuevo;
    nuevo->Anterior=aux;
}
}
void mostrar(){
    Nodo *aux=lista;
    while(aux!=NULL){
    cout<<aux->valor<<" -> ";
    aux=aux->Siguiente;
}
}
void mostrar_an()
{
    Nodo *aux=lista;
    while(aux->Siguiente!=NULL){
    aux=aux->Siguiente;
}
    while(aux!=NULL){
    cout<<aux->valor<<" -> ";
    aux=aux->Anterior;
}
}
