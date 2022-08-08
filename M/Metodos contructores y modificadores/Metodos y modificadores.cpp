#include<iostream>
#include<stdlib.h>
using namespace std;
class punto{
	private:
		int x,y;
	public:
		punto();
		void setp(int,int);
		int getpX();
		int getpY();
};
punto::punto(){
}
void punto::setp(int _x,int _y){
	x = _x;
	y = _y;
}
int punto::getpX(){
	return x;
}
int punto::getpY(){
	return y;
}
int main(){
	punto p1;
	p1.setp(15,10);
	cout<<p1.getpX()<<endl;
	cout<<p1.getpY()<<endl;
	system("pause");
	return 0;
}
