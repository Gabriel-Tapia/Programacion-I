//4.6

#include<iostream>
#include<math.h>
using namespace std;


int main (){
	
	int n,sumatoria=0;
	
	cout<<"Ingrese el tamaño del arreglo"<<endl;
	cin>>n;
	int m=(n/2)+1;
	int arreglo[m];
	int *puntero;
	puntero=arreglo;
	
	for(int i=0;i<=n;i++){
		
		if(i%2!=0){
			*puntero=i;
			sumatoria=sumatoria+*puntero;
			*puntero++;
		}
		
		
	}
	
		for(int j=0;j<m;j++){
		
	 	cout<<arreglo[j]<<endl;
		
	}
		
	cout<<"La suma de los numeros impares es : "<<sumatoria<<endl;
		
	
	
	
	return 0;
}
