//Operaciones aritmeticas basicas con entradas de datos
#include<iostream>
using namespace std;
int main(){
	float n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
	return 0;
}
