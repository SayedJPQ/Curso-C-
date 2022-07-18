#include<iostream>
#include<conio.h>
using namespace std;
struct Persona{
	char nombre[30];
	int edad;
}persona, *punteropersona = &persona;
void pedirdatos();
void mostrardatos(Persona *);
int main(){
	pedirdatos();
	mostrardatos(punteropersona);
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"Digita tu nombre: ";
	cin.getline(punteropersona->nombre,30,'\n');
	cout<<"Digita tu edad: ";
	cin>>punteropersona->edad;
}
void mostrardatos(Persona *punteropersona){
	cout<<"\nSu nombre es: "<<punteropersona->nombre<<endl;
	cout<<"\nSu edad es: "<<punteropersona->edad<<endl;
}
