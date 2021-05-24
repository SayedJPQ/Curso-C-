//Pedir datos y mostrarlos Edad = int Sexo = caracter Altura = float
#include<iostream>
using namespace std;
int main(){
	int edad;
	//al usar una variable tipo char se debe especificar el numero de caracteres de lo contrario sera 1
	char sexo[10];
	float altura;
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura: "; cin>>altura;
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	return 0;
}
