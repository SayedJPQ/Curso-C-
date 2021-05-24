#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int suma = 0,cuadrado;
	for(int i=0; i<=10; i++){
		cuadrado = i * i;
		suma += cuadrado;
	}
	cout<<"El resultado de la suma de los cuadrados es: "<<suma<<endl;
	getch();
	return 0;
}
