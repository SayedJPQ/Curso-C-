#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;
void anadir();
int main(){
	anadir();
	system("pause");
	return 0;
}
void anadir(){
	ofstream archivo;
	string texto;
	archivo.open("C:\\Users\\Usuario\\Desktop\\Sayed\\Programacion\\Curso C++\\A\\Archivos\\sayed.txt",ios::app);
	if(archivo.fail()){
		cout<<"Error";
		exit(1);
	}
	cout<<"Digite texto para agregar: ";
	getline(cin,texto);
	archivo<<texto<<endl;
	archivo.close();
}
