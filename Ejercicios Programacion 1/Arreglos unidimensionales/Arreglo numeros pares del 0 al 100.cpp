//1.2

#include<iostream>
using namespace std;


int main (){
	
	int aux=0;
	int arreglo[50];
	
	
	for(int i=0;i<=100;i++){
		
		if(i%2==0){
			arreglo[aux]=i;
			aux++;	
		}
		
		
	}
	
	for(int j=0;j<=50;j++){
		
	 cout<<arreglo[j]<<endl;
		
	}
	
	
	return 0;
}
