#include<iostream>
#include<stdio.h>
#include<string.h>
#include<locale>

using namespace std;

struct persona{
	char nombre[20];
	float tiempo;
	char revista[20];
};

int main(){
	char *locale;
	locale=setlocale(LC_ALL,"");
	struct persona A[10];
    struct persona *apuntador;
    apuntador=A;
    int option,e;
    char eliminar[20];
    for(int i=0; i<10; i++)
        A[i].nombre[0]='n';
        
    cout<<"SELECCIONE UNA OPCION"<<endl;
	cout<<"Accion 1: Agregar una nueva suscripcion "<<endl;
	cout<<"Accion 2: Eliminar usuario suscrito"<<endl;
	cout<<"Accion 3: Mostrar los usuarios suscritos"<<endl;
	cout<<"Accion 4: Salir"<<endl;
    cin>>option;
    
    switch (option)
    {
    case 1:
            for(int i=0;i<9; i++){
                if(A[i].nombre[0]=='n'){
                    cout<<"Nombre: ";
					fflush(stdin);
					cin.getline(A[i].nombre,20,'\n');
                    cout<<"Tiempo: ";
					fflush(stdin);
					cin>>A[i].tiempo;
                    cout<<"Nombre de la revista: ";
					fflush(stdin);
					cin.getline(A[i].revista,20,'\n');
                    break;
                    }else
                    cout<<"El "<<i+1<<" espacio esta ocupado"<<endl;
		}break;
	case 2:
            cout<<"Nombre del usuario que desea eliminar de la lista: ";
			fflush(stdin);
			cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                e=strcmp(apuntador->nombre,eliminar);
                if (e!=0)
                    apuntador++;
                else{
                    A[i].nombre[0]='n';
                    cout<<"El usuario ha sido eliminado";
                    break;
                }
            }
            break;
    case 3:
		for(int i=0; i<1; i++){
		cout<<"\tDATOS GUARDADOS"<<endl;
        cout<<"Nombre: "<<apuntador->nombre<<endl;
        cout<<"Tiempo: "<<apuntador->tiempo<<endl;
        cout<<"Nombre de la Revista:"<<apuntador->revista<<endl;
    }
        	break;
        case 4:
            cout<<"Gracias por su visita"<<endl;{
            break;
        }
	}
    
}
