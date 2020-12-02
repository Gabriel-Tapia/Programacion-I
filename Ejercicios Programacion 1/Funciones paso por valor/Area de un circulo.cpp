//3.5
#include<iostream>
using namespace std;

float area(float radio){
	
	float resultado=3.1416*radio*radio;
	return resultado;	
	
}


int main (){
	
	float radio=2;
	float resultado=area(radio);
	cout<<"El area del circulo es :"<<resultado;
	return 0;
}
