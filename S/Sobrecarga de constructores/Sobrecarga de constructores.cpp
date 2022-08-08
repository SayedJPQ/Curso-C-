#include<iostream>
#include<stdlib.h>
using namespace std;
class Fecha{
	private:
		int day,month,year;
	public:
		Fecha(int,int,int);
		Fecha(long);
		void mostrarfecha();
};
Fecha::Fecha(int _day, int _month, int _year){
	year =_year;
	month = _month;
	day = _day;
}
Fecha::Fecha(long fecha){
	year = int(fecha/10000);
	month = int((fecha-year*10000)/100);
	day = int(fecha-year*10000-month*100);
}
void Fecha::mostrarfecha(){
	cout<<"La fecha es: "<<day<<"/"<<month<<"/"<<year<<endl;
}
int main(){
	Fecha hoy(8,8,2022);
	Fecha ayer(20220807);
	hoy.mostrarfecha();
	ayer.mostrarfecha();
	system("pause");
	return 0;
}
