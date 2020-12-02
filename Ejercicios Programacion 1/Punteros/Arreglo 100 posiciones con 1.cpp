//4.1
#include<iostream>
using namespace std;

int main (){
	

	int arreglo[100];
	int *puntero;
	puntero=arreglo;
	
	for(int i=0;i<100;i++){
		
		*puntero=1;
		*puntero++;
		
	}
	
	for(int j=0;j<100;j++){
		
	 cout<<arreglo[j]<<endl;
		
	}
	
	
	return 0;
}
