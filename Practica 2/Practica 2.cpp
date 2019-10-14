#include<iostream>

using namespace std;

int main(int argc, char** argv)
{

	int arreglo[10],*puntero;
	int numero;
	puntero=&arreglo[0];
	int mayor=INT_MIN;
	
	for(int i=0; i<=9; i++){
	cout<<"Ingrese el valor:"<<i+1<<endl;
	cin>>arreglo[i];
	
}

	for(int *puntero=&arreglo[0]; puntero<=&arreglo[9]; puntero++){
		if(*puntero>mayor) mayor=*puntero;
	}
	
	cout<<"El valor mayor es: "<<mayor<<endl;
	return 0;
}
