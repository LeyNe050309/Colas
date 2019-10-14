
#include<iostream>
#include<conio.h>
using namespace std;

struct impresoras{
	char tipo[20];
	char empresa;	
};
struct marca{
	char modelo[20];
	int precio;
	float velocidad;
	struct impresoras impresor;
};

int main(int argc, char** argv){
    struct marca p1[5];
	struct marca *apuntador;
	
	apuntador=p1;
	for (int i=0; i<2; i++){
		cout<<"Marca:";
		cin.getline(p1[i].modelo,20);
		cout<<"Precio:";
		cin>>p1[1].precio;
		cout<<"Velocidad:";
		cin>>p1[i].velocidad;
		cout<<"Tipo:";
		fflush(stdin);
		cin.getline(p1[i].impresor.tipo,20);
	}
	cout<<endl<<"Impresoras Guardadas:"<<p1[1].modelo;
	cout<<endl<<"Precio:"<<p1[1].precio;
	cout<<endl<<"Modelos guardados:"<<p1[1].impresor.tipo;
	
	getch();
	return 0;
}
