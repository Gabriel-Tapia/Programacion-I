//1.3
#include<iostream>
using namespace std;

int main (){
	
	int escalar=2;
	int arreglo[50];
	
	for(int i=0;i<50;i++){
		
		arreglo[i]=1;
		
	}
	
	for(int j=0;j<50;j++){
		
		arreglo[j]=arreglo[j]*escalar;
		cout<<arreglo[j]<<endl;
	 	
		
	}
	
	
	return 0;
}
