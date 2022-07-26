//Listas enlazadas
#include<iostream>
#include<conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
int main(){
	int dato;
	Nodo *lista = NULL;
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarLista(lista,dato);
	mostrarLista(lista);
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarLista(lista,dato);
	mostrarLista(lista);
	getch();
	return 0;
}
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevonodo = new Nodo();
	nuevonodo->dato = n;
	Nodo *aux1 = lista;
	Nodo *aux2;
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux2 = aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevonodo;	
	}
	else{
		aux2->siguiente = nuevonodo; 
	}
	nuevonodo->siguiente = aux1;
}
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}
