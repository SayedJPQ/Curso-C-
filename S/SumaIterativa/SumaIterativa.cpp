#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int suma = 0, n, elevacion=0;
	cout<<"Digite el numero a calcular: ";cin>>n;
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	cout<<"\nLa suma total es: "<<suma<<endl;
	getch();
	return 0;
}
