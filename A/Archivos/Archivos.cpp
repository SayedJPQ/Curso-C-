#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void escribir();
int main(){
	escribir();
	system("pause");
	return 0;
}
void escribir(){
	ofstream archivo;
	string nombre,frase;
	cout<<"Digite nombre de archivo: ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::out);
	if(archivo.fail()){
		cout<<"Error";
		exit(1);
	}
	cout<<"\nDigite texto del archivo: ";
	getline(cin,frase);
	archivo<<frase<<endl;
	archivo.close();
}
