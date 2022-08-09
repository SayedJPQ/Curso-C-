#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal {
	private:
	 	string Mamiferos;
	 	string Peces;
 		string Plantas;
	public:
	 	Animal(string,string,string);
	 	virtual void comer();
};

class Humano : public Animal {
private:
 string Chocolate;
public:
 Humano(string,string,string,string);
 void comer();
};

class Perro : public Animal {
private:
 string ComidaDePerro;
public:
 Perro(string, string, string, string);
 void comer();
};


Animal::Animal(string _mamiferos, string _peces, string _plantas) {
 Mamiferos = _mamiferos;
 Peces = _peces;
 Plantas = _plantas;
}

void Animal::comer() {
 cout << "Come este mamifero: " << Mamiferos << endl;
 cout << "Come este pez: " << Peces << endl;
 cout << "Come esta planta: " << Plantas << endl;
}
Humano::Humano(string _mamiferos,string _peces,string _plantas,string _Chocolate) : Animal( _mamiferos,_peces, _plantas){
 Chocolate = _Chocolate;
}

void Humano::comer() {
 Animal::comer();
 cout << "Tambien come esto: " << Chocolate << endl;
}

Perro::Perro(string _mamiferos,string _peces, string _plantas,string _ComidaDePerro) : Animal(_mamiferos, _peces, _plantas) {
 ComidaDePerro = _ComidaDePerro;
}
void Perro::comer() {
 Animal::comer();
 cout << "Tambien come cosas raras como: " << ComidaDePerro << endl;

}
int main()
{
 Animal* vector[2];
 vector[0] = new Humano("Vacas", "Anguila", "Lechuga", "Chocolate Blanco");
 vector[1] = new Perro("Vacas", "Anguila", "Lechuga", "Tornillos");

 vector[0]->comer();
 cout << "\n" << endl;
 vector[1]->comer();
 cout << "\n" << endl;
   
}
