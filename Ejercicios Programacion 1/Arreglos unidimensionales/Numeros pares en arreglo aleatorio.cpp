//1.8

#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main (){
	
	int n=10;
	int aux=0;
	int arreglo[n];
	
	
	srand(time(NULL));
	
	for(int i=0;i<n;i++){
		
		arreglo[i]=rand() %1000;
	
		
	}
		
	for(int j=0;j<n;j++){
		
	 cout<<arreglo[j]<<endl;
		
	}
	
	cout<<"A continuacion se muestran los numeros pares dentro del vector: "<<endl;
	for(int j=0;j<n;j++){
		
		if(arreglo[j]%2==0){
			
			cout<<arreglo[j]<<endl;	
		}
	
		
	}
		
	
	

	
	return 0;
}
