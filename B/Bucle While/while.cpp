#include<iostream>
#include<conio.h> 
//Conio.h es la libreria para un ciclo para que un programa no se cierre automaticamente y getch() es la funcion del ciclo
using namespace std;
int main(){
	int iterador, i;
	iterador = 0;
	i = 10;
	while(iterador<=10){
		cout<<iterador<<endl;
	//El incremento es igual a java
		iterador++;
	}
	while(i>=0){
		cout<<i<<endl;
	//El decremento es igual a java
		i--;
	}
	getch();
	return 0;
}
