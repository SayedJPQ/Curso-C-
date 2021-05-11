#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Digite los 2 numeros a comparar: ";cin>>num1>>num2;
	if(num1==num2){
		cout<<"Ambos numeros son iguales";
	}
	else if(num1>num2){
		cout<<"El mayor es numero: "<<num1;
	}
	else{
		cout<<"El mayor es numero: "<<num2;
	}
	return 0;
}
