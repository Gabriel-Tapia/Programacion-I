//ejercicio 4.4
#include<iostream>
using namespace std;


int main (){
	
	int arreglo[10];
	int *puntero;
	puntero=arreglo;
	
	cout<<"Por favor ingrese los 10 numeros: "<<endl;
	
	for(int i=0;i<10;i++){
		
		cin>>*puntero;
		puntero++;
		
	}
	
	for(int j=0;j<10;j++){

	 	cout<<arreglo[j]<<endl;
		
	}
	
	
	return 0;
}

