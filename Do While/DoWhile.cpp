#include<iostream>
#include<stdlib.h>
//Hace algo parecido que la libreiria conio.h solo que pausa hasta que se presione una tecla
using namespace std;
int main(){
	int i;
	i = 0;
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	system("pause");
	return 0;
}
