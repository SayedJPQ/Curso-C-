#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100],n,mayor=0;
	cout<<"Digite cuantos elementos tendra el array: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
	}
	cout<<"\nEl numero mayor es "<<mayor<<endl;
	getch();
	return 0;
}
