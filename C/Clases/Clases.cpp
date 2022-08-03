#include<iostream>
#include<stdlib.h>
using namespace std;
class Persona{
	private:
		int edad;
		string nombre;
	public:
		Persona(int,string);
		void leer();
		void correr();
};
Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}
void Persona::leer(){
	cout<<"Soy "<<nombre<<" estoy leyendo"<<endl;
}
void Persona::correr(){
	cout<<"Soy "<<nombre<<" estoy corriendo"<<endl;
}
int main(){
	Persona p1 = Persona(19,"Sayed");
	Persona p2 = Persona(14,"Sara");
	p1.leer();
	p2.correr();
	system("pause");
	return 0;
}
