//punto1
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main (){
	
	int n=4, aux, aux2, prom;
	int arreglo[n][n];
	
	
	srand(time(NULL));
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			
			arreglo [i][k]=rand() %1000;
		}
					
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			cout<<"\t"<<arreglo[i][k];
		}
		cout<<endl;		
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			if(i==0 && k==0){
				
				aux=arreglo[i][k];
			}
			
			if(aux>arreglo[i][k]){
				
				aux=arreglo[i][k];
			}
		}
				
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			if(i==0 && k==0){
				
				aux2=arreglo[i][k];
			}
			
			if(aux2<arreglo[i][k]){
				
				aux2=arreglo[i][k];
			}
		}
				
	}
	
		for(int i=0;i<n;i++){
		
		prom=(aux+aux2)/2;
				
	}
	
	 cout<<"\nEl numero menor dentro del vector bidimensional generado es: "<<aux<<endl;
	 cout<<"\nEl numero mayor dentro del vector bidimensional generado es: "<<aux2<<endl;
	 cout<<"\nEl promedio del numero mayor y menor del vector bidimensional es: "<<prom<<endl;
	
	
	
	return 0;
}
