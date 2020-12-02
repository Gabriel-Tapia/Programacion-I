//5.4
#include<iostream>
#include<math.h>
using namespace std;

void area(float& circunferencia, float& radio, float& are){
	
	radio=circunferencia/(2*3.1416);
	are=3.1416*radio*radio;
	
}


int main (){
	
	float radio=0, are=0, circunferencia=30;
	area(circunferencia,radio,are);
	cout<<"El area del circulo es: "<<are<<" y el radio es: "<<radio;
	return 0;
}
