#include<iostream>
#include<stdlib.h>
using namespace std;
class perro{
	private:
		string nombre,raza;
	public:
		perro(string,string);
		//Destructor
		~perro();
		void mostrar();
		void jugar();
};
perro::perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}
perro::~perro(){
}
void perro::mostrar(){
	cout<<nombre<<endl;
	cout<<raza<<endl;
}
void perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}
int main(){
	perro p1("Molly","Mestizo");
	p1.mostrar();
	p1.jugar();
	p1.~perro();
	system("pause");
	return 0;
}
