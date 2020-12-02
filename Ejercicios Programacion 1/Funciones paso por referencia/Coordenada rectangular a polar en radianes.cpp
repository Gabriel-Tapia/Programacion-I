//5.1
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

// x=rcost, y=rsent, t=arctg y/x, r^2=x^2+y^2.

void raices(float& x, float& y, float& r, float& t){
	
	t= atan(y/x);
	r= sqrt(pow(x,2)+pow (y,2));
	
	}

int main (){
	
	float a=1,b=10;
	float x1=0,x2=0;
	raices(a,b,x1,x2);
	cout<<"La coordenada polar es: ("<<x1<<" , "<<x2<<")";
	
	
	
	return 0;
}
