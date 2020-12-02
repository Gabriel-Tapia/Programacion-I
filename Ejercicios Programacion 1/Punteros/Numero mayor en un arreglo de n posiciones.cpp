//ejercicio 4.5
#include<iostream>
using namespace std;


int main (){
	
	int n, aux;
	cout<<"Por favor ingrese el tamano del arreglo: "<<endl;
	cin>>n;
	int arreglo[n];
	int *puntero;
	puntero=arreglo;
	
	
	cout<<"Por favor ingrese el vector de la forma (1 2 3 ... n): "<<endl;
	
	for(int i=0;i<n;i++){
		
		cin>>*puntero;
		puntero++;
		
	}
	
	puntero=arreglo;
	
	for(int j=0;j<n;j++){
		
	 	if(j==0){
	 		
	 		aux=*puntero;
	 		
		 }	
		 		
		if(aux<*puntero){
			
			aux=*puntero;
		}
		
		*puntero++;
		
	}
	 cout<<"el numero mayor dentro del vector ingresado es: "<<aux<<endl;
	 
	 	for(int j=0;j<5;j++){
		
	 	cout<<arreglo[j]<<endl;
		
	}
	
	return 0;
}
