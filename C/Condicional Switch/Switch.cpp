#include<iostream>
using namespace std;
//Switch es como Select case en VB.NET 
/*Sintaxis
Switch(expresion){
Case algo:
intruccion;
Default si no cumple nada
Intruccion;
}
*/
int main(){
	int numero;
	cout<<"Digite un numero entre el 1 y el 5: "; cin>>numero;
	switch(numero){
		case 1: cout<<"Es el numero 1";break;
		case 2: cout<<"Es el numero 2";break;
		case 3: cout<<"Es el numero 3";break;
		case 4: cout<<"Es el numero 4";break;
		case 5: cout<<"Es el numero 5";break;
		default: cout<<"No esta en el rango de 1 a 5";break;
	}
	return 0;
}
