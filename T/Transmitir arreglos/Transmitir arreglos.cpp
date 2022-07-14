//Transmision de Arreglos
#include<iostream>
#include<conio.h>
using namespace std;
int max(int *, int);
int main(){
	const int Elementos = 5;
	int numeros[Elementos] = {1,2,9,4,5};
	cout<<"El mayor elemento es: "<<max(numeros,Elementos);
	getch();
	return 0;
}
int max(int *dirvec, int Elementos){
	int Maximo = 0;
	for(int i=0;i<Elementos;i++){
		if(*(dirvec+i)>Maximo){
			Maximo = *(dirvec+i);
		}
	}
	return Maximo;
}
