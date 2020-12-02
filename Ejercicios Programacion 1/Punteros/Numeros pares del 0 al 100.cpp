//4.2

#include<iostream>
using namespace std;


int main (){
	
	int arreglo[50];
	int *puntero;
	puntero=arreglo;
	
	for(int i=0;i<=100;i++){
		
		if(i%2==0){	
			*puntero=i;
			*puntero++;
		}
		
		
	}
	
	for(int j=0;j<=50;j++){
		
	 cout<<arreglo[j]<<endl;
		
	}
	
	
	return 0;
}
