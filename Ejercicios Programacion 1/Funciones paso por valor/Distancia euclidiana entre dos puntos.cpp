//3.3
#include<iostream>
#include<math.h>
using namespace std;

float distancia(float a,float b,float a2,float b2){
	
	float resultado=sqrt(((a2-a)*(a2-a))+((b2-b)*(b2-b)));
	return resultado;	
	
}


int main (){
	
	float a=2,b=4,a2=5,b2=6;
	float resultado=distancia(a,b,a2,b2);
	cout<<"La distancia euclidiana entre los putos ("<<a<<","<<b<<") y ("<<a2<<","<<b2<<") es: "<<resultado;
	return 0;
}
