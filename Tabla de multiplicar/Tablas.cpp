#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero;
	do{
		cout<<"Digite un numero entero del 1 al 10: ";cin>>numero;
	}while((numero<1)||(numero>10));
	for (int i=1; i<=20; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	getch();
	return 0;
}
