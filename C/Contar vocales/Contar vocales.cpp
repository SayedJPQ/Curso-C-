#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char frase[30];
	int va = 0, ve = 0, vi = 0, vo = 0, vu = 0;
	cout<<"Escribe una frase: ";
	cin.getline(frase,30,'\n');
	for(int i = 0; i<30; i++){
		switch(frase[i]){
			case 'a': va++; break;
			case 'e': ve++; break;
			case 'i': vi++; break;
			case 'o': vo++; break;
			case 'u': vu++; break;
		}
	}
	cout<<"vocal a: "<<va<<endl;
	cout<<"vocal e: "<<ve<<endl;
	cout<<"vocal i: "<<vi<<endl;
	cout<<"vocal o: "<<vo<<endl;
	cout<<"vocal u: "<<vu<<endl; 
	getch();
	return 0;
}
