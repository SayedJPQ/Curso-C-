#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};
void menu();
Nodo *crearnodo(int, Nodo *);
void insertar(Nodo *&,int, Nodo *);
void mostrar(Nodo *,int);
bool busqueda(Nodo *,int);
void preorden(Nodo *);
void inorden(Nodo *);
void postorden(Nodo *);
void eliminar(Nodo *,int);
void eliminarnodo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruir(Nodo *);
Nodo *minimo(Nodo *);
Nodo *arbol = NULL;
int main(){
	menu();
	getch();
	return 0;
}
void menu(){
	int dato,opcion,cont=0;
	do{
		cout<<"\t.:Menu:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar arbol"<<endl;
		cout<<"3. Buscar dato"<<endl;
		cout<<"4. Recorrer arbol en PreOrden"<<endl;
		cout<<"5. Recorrer arbol en InOrden"<<endl;
		cout<<"6. Recorrer arbol en PostOrden"<<endl;
		cout<<"7. Eliminar nodo"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
			cin>>dato;
			insertar(arbol,dato,NULL);
			cout<<"\n";
			system("pause");
			break;
			case 2: cout<<"\nMostrando arbol:\n\n";
			mostrar(arbol,cont);
			cout<<"\n";
			system("pause");
			break;
			case 3: cout<<"\nDigite elemento a buscar: ";
			cin>>dato;
			if(busqueda(arbol,dato)==true){
				cout<<"\nElemento fue encontrado "<<dato<<"\n";
			}
			else{
				cout<<"\nElemento no encontrado\n";
			}
			cout<<"\n";
			system("pause");
			break;
			case 4: cout<<"\nRecorriendo en PreOrden: ";
			preorden(arbol);
			cout<<"\n\n";
			system("pause");
			break;
			case 5: cout<<"\nRecorriendo en InOrden: ";
			inorden(arbol);
			cout<<"\n\n";
			system("pause");
			break;
			case 6: cout<<"\nRecorriendo en PostOrden: ";
			postorden(arbol);
			cout<<"\n\n";
			system("pause");
			break;
			case 7: cout<<"\nDigite nodo a eliminar: ";
			cin>>dato;
			eliminar(arbol,dato);
			cout<<"\n";
			system("pause");
			break;
		}
		system("cls");
	}while(opcion != 8);
}
Nodo *crearnodo(int n, Nodo *padre){
	Nodo *nuevonodo = new Nodo();
	nuevonodo->dato=n;
	nuevonodo->der=NULL;
	nuevonodo->izq=NULL;
	nuevonodo->padre = padre;
	return nuevonodo;
}
void insertar(Nodo *&arbol, int n, Nodo *padre){
	if(arbol==NULL){
		Nodo *nuevonodo = crearnodo(n,padre);
		arbol = nuevonodo;
	}
	else{
		int raiz = arbol->dato;
		if(n<raiz){
			insertar(arbol->izq,n,arbol);
		}
		else{
			insertar(arbol->der,n,arbol);
		}
	}
}
void mostrar(Nodo *arbol, int contador){
	if(arbol==NULL){
		return;
	}
	else{
		mostrar(arbol->der,contador+1);{
			for(int i=0;i<contador;i++){
				cout<<"   ";
			}
			cout<<arbol->dato<<endl;
			mostrar(arbol->izq,contador+1);
		}
	}
}
bool busqueda(Nodo *arbol, int n){
	if(arbol==NULL){
		return false;
	}
	else if(arbol->dato==n){
		return true;
	}
	else if(n<arbol->dato){
		return busqueda(arbol->izq,n);
	}
	else{
		return busqueda(arbol->der,n);
	}
}
void preorden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preorden(arbol->izq);
		preorden(arbol->der);
	}
}
void inorden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		inorden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inorden(arbol->der);
	}
}
void postorden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		postorden(arbol->izq);
		postorden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
void eliminar(Nodo *arbol,int n){
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarnodo(arbol);
	}
}
Nodo *minimo(Nodo *arbol){
	if (arbol == NULL){
		return NULL;
	}
	if (arbol->izq){
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}
void reemplazar(Nodo *arbol,Nodo *nuevonodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevonodo;
		}
		else if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->der = nuevonodo;
		}
	}
	if(nuevonodo){
		nuevonodo->padre = arbol->padre;
	}
}
void destruir(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}
void eliminarnodo(Nodo *nodoeliminar){
	if(nodoeliminar->izq && nodoeliminar->der){
		Nodo *menor = minimo(nodoeliminar->der);
		nodoeliminar->dato = menor->dato;
		eliminarnodo(menor);
	}
	else if(nodoeliminar->izq){
		reemplazar(nodoeliminar,nodoeliminar->izq);
		destruir(nodoeliminar);
	}
	else if(nodoeliminar->der){
		reemplazar(nodoeliminar,nodoeliminar->der);
		destruir(nodoeliminar);
	}
	else{
		reemplazar(nodoeliminar,NULL);
		destruir(nodoeliminar);
	}
}
