//3.4
#include<iostream>
using namespace std;

float dc(float volt,float res1,float res2,float res3,float tipoc){ // para tipoc o=serie, 1=paralelo
	
	float corrientet,rest;
	if(tipoc==0){
		rest=res1+res2+res3;
		corrientet=volt/rest;
	}	
	if(tipoc==1){
		rest=1/((1/res1)+(1/res2)+(1/res3));
		corrientet=volt/rest;
	}
	return corrientet;
}


int main (){
	
	float volt=12,res1=5,res2=1,res3=10,tipoc=0;
	float voltt=volt, corrientet = dc(volt,res1,res2,res3,tipoc);
	cout<<"el valor de la corriente en el circuito es: "<<corrientet<<" amperios, y el voltaje es de: "<<voltt<<" voltios";
	return 0;
}
