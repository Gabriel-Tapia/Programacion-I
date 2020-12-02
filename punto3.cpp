//punto3

#include<iostream>
#include<math.h>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;


float mediana (float *puntero, int n){
	
	float media=0.0, temp;
	int k=n/2;

	for (int i=1; i<n; i++){
		
        for (int j=0 ; j<n - 1; j++){
            if (puntero[j] > puntero[j+1]){
                temp = puntero[j];
                puntero[j]= puntero[j+1];
                puntero[j+1] = temp;
        	}
      	}
   	}
		
	if(n%2==0){
		
		media+=puntero[k-1];
		media+=puntero[k];
		media/=2;
		
	}else{
	
		media=puntero[k];
	}
	
	return media;
}

int main (){
	
	int n=5;
	float arreglo[n];
	float media;
		
	srand(time(NULL));
	for(int i=0;i<=n;i++){
		
		arreglo[i]=rand() %1000;
		
	}
	cout<<"Arreglo de tamaño "<<n<<" sin ordenar: "<<endl;
	for(int k=0;k<n;k++){
		cout<<"\t"<<arreglo[k];
	}
	cout<<endl;		
	
	media=mediana(arreglo,n);
	cout<<"Arreglo de tamaño "<<n<<" ordenado de manera ascendente: "<<endl;
	for(int k=0;k<n;k++){
		cout<<"\t"<<arreglo[k];
	}
	cout<<endl;		
	cout<<"La media del arreglo es: ";
	cout<<media<<endl;
	
	
	return 0;
}
