//Direccion de punteros
#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(float *, float *);
int main(){
	float num1 = 1.1, num2 = 2.2;
	cout<<"Numero 1: "<<num1<<endl;
	cout<<"Numero 2: "<<num2<<endl;
	intercambio(&num1, &num2);
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"El nuevo valor de num1 es: "<<num1<<endl;
	cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	getch();
	return 0;
}
void intercambio(float *dirnum1, float *dirnum2){
	float aux;
	aux = *dirnum1;
	*dirnum1 = *dirnum2;
	*dirnum2 = aux;
}
