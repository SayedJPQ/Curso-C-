//Criterios:60% Prueba 30% Practica 10% Participacion
#include<iostream>
using namespace std;
int main(){
	float practica, prueba, participacion, nota_final = 0;
	cout<<"Digite la nota de practica: ";cin>>practica;
	cout<<"Digite la nota de prueba: ";cin>>prueba;
	cout<<"Digite la nota de participacion: ";cin>>participacion;
	// Al usar *= Es como si se declara la misma variable para la operacion
	practica *= 0.30; //=practica = practica * 0.30
	prueba *= 0.60;
	participacion *= 0.10;
	nota_final = practica + prueba + participacion;
	cout<<"\nLa nota final es: "<<nota_final<<endl;
	return 0;
}
