#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"Digite un caracter que pertenezca a las vocales: ";cin>>letra;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o': 
		case 'u': cout<<"Es una vocal minuscula";break;
		default : cout<<"No es una vocal minuscula";break;
	}
	return 0;
}
