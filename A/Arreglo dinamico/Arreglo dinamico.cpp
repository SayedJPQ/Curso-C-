//Asignacion dinamica de arreglos
#include<iostream>
#include<conio.h>
#include<stdlib.h>
void pedirnotas();
void mostrar();
int numcal,*calif;
using namespace std;
int main(){
	pedirnotas();
	mostrar();
	delete[] calif;
	getch();
	return 0;
}
void pedirnotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numcal;
	calif = new int[numcal];
	for(int i=0; i<numcal;i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
}
void mostrar(){
	cout<<"\n\nMostrando notas:\n";
	for(int i=0; i<numcal; i++){
		cout<<calif[i]<<endl;
	}
}
