#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{

    char cadena1[20];
    char cadena2[20];

    cout<<"Digite la palabra: ";
    cin.getline(cadena1,20,'\n');
        cout<<"Digite la palabra: ";
    cin.getline(cadena2,20,'\n');
    strupr(cadena1);
    strupr(cadena2);
    if(strcmp(cadena1,cadena2)==0)
    {
        cout<<cadena1<<" = "<<cadena2<<" son iguales"<<endl;
    }
    else
    {
        cout<<cadena1<<" = "<<cadena2<<" no son iguales"<<endl;
    }
        getch();
        return 0;
}
