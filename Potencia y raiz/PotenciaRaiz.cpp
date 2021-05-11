#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x,y,resultado = 0;
	cout<<"Digite el valor de X: "; cin>>x;
	cout<<"Digite el valor de Y: "; cin>>y;
//La potencia se pone primero la variable y despues la potencia a la que quiero elevar
	resultado = (sqrt(x))/(pow(y,2)-1);
	cout<<"El resultado de la ecuacion es: "<<resultado<<endl;
	return 0;
}

