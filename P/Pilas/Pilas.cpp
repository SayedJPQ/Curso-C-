#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarpila(Nodo *&,int);
int main(){
	Nodo *pila = NULL;
	int n1,n2;
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarpila(pila,n1);
	cout<<"Digite otro numero: ";
	cin>>n2;
	agregarpila(pila,n2);
	getch();
	return 0;
}
void agregarpila(Nodo *&pila, int n){
	Nodo * nuevonodo = new Nodo();
	nuevonodo->dato = n;
	nuevonodo->siguiente = pila;
	pila = nuevonodo;
}
