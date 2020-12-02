//3.2
#include<iostream>
using namespace std;
//v=i*r;i=v/r

float corriente(float volt,float res){
	
	float resultado=volt/res;
	return resultado;	
	
}


int main (){
	
	float volt=12,res=24;
	cout<<"El valor de la corriente para una fuente de "<<volt<<" voltios y una resistencia de "<<res<<" ohms, es de "<<corriente(volt,res)<<" amperios.";
	
	return 0;
}
