#include<iostream>
#include<conio.h>
using namespace std;
struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Sayed",19};
int main(){
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	getch();
	return 0;
}
