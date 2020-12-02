//ejercicio 1.6
#include<iostream>
using namespace std;


int main (){
	
	int n, aux;
	cout<<"Por favor ingrese el tamano del arreglo: "<<endl;
	cin>>n;
	int arreglo[n];
	
	
	cout<<"Por favor ingrese el vector de la forma (1 2 3 ... n): "<<endl;
	
	for(int i=0;i<n;i++){
		
		cin>>arreglo[i];
		
	}
	
	for(int j=0;j<n;j++){
		
	 	if(j==0){
	 		
	 		aux=arreglo[j];
	 		
		 }	
		 		
		if(aux<arreglo[j]){
			
			aux=arreglo[j];
		}
		
	}
	 cout<<"el numero mayor dentro del vector ingresado es: "<<aux<<endl;
	
	return 0;
}
