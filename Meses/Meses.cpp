#include<iostream>
using namespace std;
int main(){
	int mes;
	cout<<"Digite un numero de un mes: ";cin>>mes;
	switch(mes){
		case 1:cout<<"\n"<<mes<<" pertenece a Enero"<<endl;break;
		case 2:cout<<"\n"<<mes<<" pertenece a Febrero"<<endl;break;
		case 3:cout<<"\n"<<mes<<" pertenece a Marzo"<<endl;break;
		case 4:cout<<"\n"<<mes<<" pertenece a Abril"<<endl;break;
		case 5:cout<<"\n"<<mes<<" pertenece a Mayo"<<endl;break;
		case 6:cout<<"\n"<<mes<<" pertenece a Junio"<<endl;break;
		case 7:cout<<"\n"<<mes<<" pertenece a Julio"<<endl;break;
		case 8:cout<<"\n"<<mes<<" pertenece a Agosto"<<endl;break;
		case 9:cout<<"\n"<<mes<<" pertenece a Septiembre"<<endl;break;
		case 10:cout<<"\n"<<mes<<" pertenece a Octubre"<<endl;break;
		case 11:cout<<"\n"<<mes<<" pertenece a Noviembre"<<endl;break;
		case 12:cout<<"\n"<<mes<<" pertenece a Diciembre"<<endl;break;
		default:cout<<"\n"<<mes<<" no pertenece a un mes";
	}
	return 0;
}
