#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarpila(Nodo *&,int);
void eliminarpila(Nodo *&, int &);
int main(){
	Nodo *pila = NULL;
	int dato;
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarpila(pila,dato);
	cout<<"Digite otro numero: ";
	cin>>dato;
	agregarpila(pila,dato);
	cout<<"\nEliminando elementos de la pila: ";
	while(pila != NULL){
		eliminarpila(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	getch();
	return 0;
}
void agregarpila(Nodo *&pila, int n){
	Nodo * nuevonodo = new Nodo();
	nuevonodo->dato = n;
	nuevonodo->siguiente = pila;
	pila = nuevonodo;
}
void eliminarpila(Nodo *&pila, int&n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
