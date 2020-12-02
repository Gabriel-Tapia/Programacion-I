//ejercicio 1.4
#include<iostream>
using namespace std;

// El programa es desarrollado teniendo en cuenta que el dia en formato de 24 horas empieza desde las 00:00 y termina 23:59.

int main (){
	
	int aux;
	int arreglo[24];
	
	for(int i=0;i<24;i++){
		
		cout<<"Por favor ingrese la temperatura para las "<<i<<" horas:"<<endl;
		cin>>arreglo[i];
		
	}
	
	cout<<"Por favor ingrese la hora para la cual desea saber la temperatura ( Por ejemplo: 20 )"<<endl;
	cin>>aux;
	
	cout<<"La temperatura para las "<<aux<<" horas es: "<<arreglo[aux]<< " grados centigrados."<<endl;
		
	
	
	
	return 0;
}
