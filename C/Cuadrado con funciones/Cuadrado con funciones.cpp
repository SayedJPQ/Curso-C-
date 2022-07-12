//cuadrado con varias funciones
#include<iostream>
#include<conio.h>
using namespace std;
void al_cuadrado(float a);
void Datos();
float a;
int main(){
Datos();
al_cuadrado(a);
}
void al_cuadrado(float a){
  cout<<"El cuadrado del numero es: ";
  cout<<a*a; //Tambien puede ser la funcion pow(variable, potencia)
}
void Datos()
{
    cout<<"Cuadrado de un numero";
    cout<<endl;
    cout<<"Dame un numero flotante: ";
    cin>>a;
}

