//5.1
#include<iostream>
#include<math.h>
using namespace std;


void raices(float& a, float& b, float& c, float& x1,float& x2){
	
	x1= ((-1*b)+sqrt((b*b)-4*a*c))/(2*a);
	x2= ((-1*b)-sqrt((b*b)-4*a*c))/(2*a);
	}

int main (){
	
	float a=1,b=10,c=2;
	float x1=0,x2=0;
	raices(a,b,c,x1,x2);
	cout<<"Las raices de la ecuacion cuadratica son: "<<x1<<" y "<<x2;
	
	
	
	return 0;
}
