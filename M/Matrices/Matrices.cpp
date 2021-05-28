#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100][100],filas,columnas;
	cout<<"Digite numero de filas: ";cin>>filas;
	cout<<"Digite numero de columnas: ";cin>>columnas;
	for(int i=0;i<filas;i++){
		for(int iterador=0;iterador<columnas;iterador++){
			cout<<"Digite un numero ["<<i<<"]["<<iterador<<"]: ";cin>>numeros[i][iterador];
		}
	}
	for(int i=0;i<filas;i++){
		for(int iterador=0;iterador<columnas;iterador++){
			cout<<numeros[i][iterador];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
