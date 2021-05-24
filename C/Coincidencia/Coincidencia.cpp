#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Digite los 3 numeros a comparar usando un espacio por cada numero: ";cin>>n1>>n2>>n3;
	if ((n1 == n2)&&(n2 == n3)){
		cout<<"Hay una coincidencia entre todos los numeros";
	}
	else if (n1 == n2){
		cout<<"Hay una coincidencia entre "<<n1<<" y "<<n2;
	}
	else if (n1 == n3){
		cout<<"Hay una coincidencia entre "<<n1<<" y "<<n3;
	}
	else if (n2 == n3){
		cout<<"Hay una coincidencia entre "<<n2<<" y "<<n3;
	}
	else{
		cout<<"No hay coincidencia";
	}
	return 0;
}
