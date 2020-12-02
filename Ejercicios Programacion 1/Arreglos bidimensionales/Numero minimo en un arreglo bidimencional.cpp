//2.1
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main (){
	
	int n=4, aux;
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
	 cout<<"\nEl numero menor dentro del vector bidimensional generado es: "<<aux<<endl;
	
	
	
	
	
	return 0;
}
