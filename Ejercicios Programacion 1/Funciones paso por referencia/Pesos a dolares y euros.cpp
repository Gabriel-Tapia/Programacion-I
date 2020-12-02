//5.4
#include<iostream>
#include<math.h>

using namespace std;

void cambio(float& pesos, float& dolares, float& euros){
	
	dolares= (pesos/3616);
	euros= (pesos/4323);	
	
}


int main (){
	
	float dolares=0, euros=0, pesos=100000;
	cambio(pesos,dolares,euros);
	cout<<"Los "<<pesos<<" pesos equivalen a: "<<dolares<<" dolares."<<endl;
	cout<<"Los "<<pesos<<" pesos equivalen a: "<<euros<<" euros."<<endl;
	return 0;
}
