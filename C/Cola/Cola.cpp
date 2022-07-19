#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertarcola(Nodo *&, Nodo *&,int);
bool colavacia(Nodo *);
void eliminarcola(Nodo *&, Nodo *&,int &);
int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarcola(frente,fin,dato);
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarcola(frente,fin,dato);
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarcola(frente,fin,dato);
	while(frente != NULL){
		eliminarcola(frente,fin,dato);
		if(frente != NULL){
			cout<<dato<<",";
		}
		else{
			cout<<dato<<".";
		}
	}
	getch();
	return 0;
}
void insertarcola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevonodo = new Nodo();
	nuevonodo->dato = n;
	nuevonodo->siguiente = NULL;
	if(colavacia(frente)){
		frente = nuevonodo;
	}
	else{
		fin->siguiente = nuevonodo;
	}
	fin = nuevonodo;
}
bool colavacia(Nodo *frente){
	return(frente == NULL)? true : false;
}
void eliminarcola(Nodo *&frente, Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
