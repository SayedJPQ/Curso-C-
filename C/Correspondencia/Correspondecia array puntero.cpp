//Correspondencia entre Arrays y Punteros
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[] = {1,2,3};
	int *dirnums;
	dirnums = numeros;
	for(int i;i<3;i++){
		cout<<"Elemento del array ["<<i<<"]: "<<*dirnums++<<endl;
	}
	getch();
	return 0;
}
