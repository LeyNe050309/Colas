#include<iostream>
#include<stdio.h>

using namespace std;

void usuario(int edad){
	cout<<":::EJEMPLO DE PASO POR VALOR:::"<<endl;
	cout<<"La edad del usuario es: "<<edad<<endl;	
}
void numero(int& nu1,int& nu2){
	cout<<"El valor del primer numero es: "<<nu1<<endl;
	cout<<"El valor del segundo numero es: "<<nu2<<endl;
}

int factorial(int);

int main(int argc,char** argv)
{
	int edad=19;
	usuario(edad);
	int num1, num2;
	int numer,fibo1,fibo2,i;

	
	cout<<":::EJEMPLO DE PASO POR REFERENCIA:::"<<endl;
	cout<<"Ingrese primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero: "<<endl;
	cin>>num2;
	
	numero(num1,num2);
	
	cout<<":::RECURSIVIDAD:::"<<endl;
   do
   {
    cout << "Introduce numero mayor que 1: ";
    cin >> numer;
   }while(numer<=1);
   cout << endl;
   cout << "Los "<<numer<< " primeros numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=numer;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   return 0;
}

