//1.7

#include<iostream>
#include<math.h>
using namespace std;


int main (){
	
	int n,aux=0,sumatoria=0;
	
	cout<<"Ingrese el tamaño del arreglo"<<endl;
	cin>>n;
	int m=(n/2)+1;
	int arreglo[m];
	
	for(int i=0;i<=n;i++){
		
		if(i%2!=0){
			arreglo[aux]=i;
			sumatoria=sumatoria+arreglo[aux];
			aux++;
		}
		
		
	}
	
	
		
	cout<<"La suma de los numeros impares es : "<<sumatoria<<endl;
		
	
	
	
	return 0;
}
