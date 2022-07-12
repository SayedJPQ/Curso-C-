//Funciones
#include<iostream>
#include<conio.h>
using namespace std;
int encontrarmayor(int x, int y);
int main(){
	int n1, n2;
	int mayor;
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;
	mayor = encontrarmayor(n1,n2);
	cout<<"El numero mayor es: "<<mayor<<endl;
	getch();
	return 0;
}
int encontrarmayor(int x, int y){
	int Max;
	if (x>y){
		Max = x;
	}
	else{
		Max = y;
	}
	return Max;
}
