#include<iostream>
using namespace std;
int main (){
	int saldo_inicial=1000, opc, extra, saldo,retiro;
	//\t sirve para tabular un espacio osea una sangria
	cout<<"\tBienvenido a su ATM virtual"<<endl;
	cout<<"1. Ingresar dinero en su cuenta"<<endl;
	cout<<"2. Retirar dinero de su cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";cin>>opc;
	switch(opc){
		case 1: cout<<"Digite el dinero que desea ingresar: ";cin>>extra;
		saldo = saldo_inicial + extra;
		cout<<"Dinero en su cuenta: "<<saldo;break;
		case 2: cout<<"Digite el dinero que desea retirar: ";cin>>retiro;
		if (retiro > saldo_inicial){
			cout<<"No tiene dinero suficiente";
		}
		else{
			saldo = saldo_inicial - retiro;
			cout<<"Dinero en su cuenta: "<<saldo;break;
		}
		case 3: break;
	}
	return 0;
}
