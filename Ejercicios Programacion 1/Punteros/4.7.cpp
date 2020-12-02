//4.7

#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main (){
	
	int n=10;
	int arreglo[n];
	int *puntero;
	puntero=arreglo;
	
	
//	srand(time(NULL));
	
	for(int i=0;i<n;i++){
		
		arreglo[i]=rand() %1000;
		puntero=arreglo;
	
		
	}
		
	for(int j=0;j<n;j++){
		
	 cout<<*puntero<<endl;
		srand(time(NULL));
	}
	
	cout<<"A continuacion se muestran los numeros pares: "<<endl;
	for(int j=0;j<n;j++){
		
		if(arreglo[j]%2==0){
			
			cout<<*puntero<<endl;	
		}
	
		
	}
		
	
	

	
	return 0;
}
