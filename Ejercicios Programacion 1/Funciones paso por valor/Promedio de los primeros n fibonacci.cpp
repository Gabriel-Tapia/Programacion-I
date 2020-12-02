//3.6
#include<iostream>
using namespace std;

float fibonacci(float n){
	
	float ant=0, man=1, aux=0, act;
	
		
	for(int k=0;k<n;k++){
			
		if(k==0){
				
			act=ant;
			aux+=act;
		}
			
		else if(k==1){
				
			act=man;
			aux+=act;
		}
			
		else {
			
			act=ant+man;
			ant=man;
			man=act;
			aux+=act;
					
		}
	}
	
	return aux/n;	
}


int main (){
	
	float n=8;
	cout<<"El promedio de los primeros"<<n<<" numeros dela serie Fibonacci es: "<<fibonacci(n);
	return 0;
}
