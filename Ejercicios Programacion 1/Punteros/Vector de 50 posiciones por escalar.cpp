//4.3
#include<iostream>
using namespace std;

int main (){
	
	int escalar=2;
	int arreglo[50];
	int *puntero;
	puntero=arreglo;
	
	for(int i=0;i<50;i++){
		
		*puntero=1;
		*puntero++;
		
	}
	
	puntero=arreglo;
	
	for(int j=0;j<50;j++){
		

		*puntero*=escalar;
		*puntero++;
	 	
		
	}
	
	for(int j=0;j<50;j++){
		
	 	cout<<arreglo[j]<<endl;
		
	}
	
	
	return 0;
}
