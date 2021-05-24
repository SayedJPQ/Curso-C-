#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Digite los 3 numeros a comparar usando un espacio por cada numero: ";cin>>n1>>n2>>n3;
	if(n1==n2 and n1==n3){
		cout<<"Los 3 numeros son iguales";
	}
	else if(n1>n2 and n1>n3){
		cout<<"El numero mayor es: "<<n1;
	}
	else if(n2>n1 and n2>n3){
		cout<<"El numero mayor es: "<<n2;
	}
	else{
		cout<<"El numero mayor es: "<<n3;
	}
	return 0;
}
