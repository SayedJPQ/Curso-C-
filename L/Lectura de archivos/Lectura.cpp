#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;
void lectura();
int main(){
	lectura();
	system("pause");
	return 0;
}
void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("C:\\Users\\Usuario\\Desktop\\Sayed\\Programacion\\Curso C++\\A\\Archivos\\sayed.txt",ios::in);
	if(archivo.fail()){
		cout<<"Error";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}
