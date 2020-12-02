//5.2
#include<iostream>
using namespace std;


void funcion(float& a, float& b, float& c, float& d,float& e){
	
	d=a;
	e=a;
	
	if(d<b){
		
		d=b;
	}
	else if(d<c){
		
		d=c;
	}

	if(e>b){
		
		e=b;
	}
	else if(e>c){
		
		e=c;
	}
	
	}

int main (){
	
	float a=1,b=10,c=2;
	float d=0,e=0;
	funcion(a,b,c,d,e);
	cout<<"El numero mayor es: "<<d<<" y el numero menor es: "<<e;
	
	
	
	return 0;
}
