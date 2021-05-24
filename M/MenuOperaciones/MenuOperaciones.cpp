#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int numero,opc;
	//\t sirve para tabular un espacio osea una sangria
	cout<<"\tCalculadora Virtual"<<endl;
	cout<<"1. Calcular el cubo de un numero"<<endl;
	cout<<"2. Ver si un numero es par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";cin>>opc;
	switch(opc){
		case 1: cout<<"Digite el numero que desea calcular el cubo: ";cin>>numero;
		numero = (pow(numero,3));
		cout<<"El cubo del numero es: "<<numero;break;
		case 2: cout<<"Digite el numero a comparar: ";cin>>numero;
		if (numero%2==0){
			cout<<numero<<" es par";
		}
		else{
			cout<<numero<<" es impar";break;
		}
		case 3: break;
	}
	return 0;
}
