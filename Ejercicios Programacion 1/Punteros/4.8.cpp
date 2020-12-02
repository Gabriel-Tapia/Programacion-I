//4.8
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main (){
	
	int n=4, aux;
	int arreglo[n][n];
	int *puntero;
    puntero=arreglo;
	
	
	srand(time(NULL));
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			
			*puntero=rand() %1000;
		}
					
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			cout<<"\t"<<*puntero;
		}
		cout<<endl;		
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			if(i==0 && k==0){
				
				aux=*puntero;
			}
			
			if(aux>*puntero){
				
				aux=*puntero;
			}
		}
				
	}
	 cout<<"\nEl numero menor dentro del vector bidimensional generado es: "<<aux<<endl;
	
	
	
	
	
	return 0;
}
