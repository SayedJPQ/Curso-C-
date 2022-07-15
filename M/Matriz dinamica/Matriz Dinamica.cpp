//Matriz dinamica
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void Pedirdatos();
void mostrar(int **,int,int);
int **punteroMatriz,filas,columnas;
int main(){
	Pedirdatos();
	mostrar(punteroMatriz,filas,columnas);
	for(int i=0;i<filas;i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
	getch();
	return 0;
}
void Pedirdatos(){
	cout<<"Digite numero de filas: ";
	cin>>filas;
	cout<<"Digite numero de columnas: ";
	cin>>columnas;
	punteroMatriz = new int*[filas];
	for(int i=0;i<filas;i++){
		punteroMatriz[i] = new int[columnas];
	}
	cout<<"Digitando elementos de la matriz: \n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteroMatriz+i)+j);
		}
	}
}
void mostrar(int **punteroMatriz,int filas,int columnas){
	cout<<"\n\nImprimiendo matriz:\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<*(*(punteroMatriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
