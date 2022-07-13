//Declaracion de Punteros
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,*dirnum;
	num = 20;
	dirnum = &num;
	cout<<"Numero: "<<num<<endl;
	cout<<"Direccion de memoria: "<<dirnum<<endl;
	getch();
	return 0;
}
