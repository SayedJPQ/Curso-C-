#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[] = {3,1,2,5,4};
	int i, dato;
	char band = 'F';
	dato = 5;
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout<<"El numero no exite";
	}
	else if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}
	getch();
	return 0;
}
