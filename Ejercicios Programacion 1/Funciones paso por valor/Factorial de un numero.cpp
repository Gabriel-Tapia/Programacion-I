//3.1
#include<iostream>
using namespace std;

int factorial(int n){
	
	int resultado=1;
	for(int i=1;i<=n;i++){
		resultado*=i;
	}
	return resultado;	
	
}


int main (){
	
	int n=3;
	cout<<"El factorial de "<<n<<" es: "<<factorial(n);
	
	
	return 0;
}
