#include<iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Digite su edad: ";cin>>edad;
	//Rango de 18 a 25 && significa y ademas
	if ((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta en el rango de 18 a 25";
	}
	else{
		cout<<"Su edad no esta en el rango de 18 a 25";
	}
	return 0;
}
