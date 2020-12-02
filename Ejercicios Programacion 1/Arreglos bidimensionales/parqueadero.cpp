//2.4
#include<iostream>
using namespace std;


int main (){
	
	// Estado inicial del parqueadero
	int arreglo[2][10] = {{0,1,2,3,0,1,2,3,0,1},{3,0,1,2,3,0,1,2,3,0}};
	int vacio=0, moto=0, a5=0, a7=0, op, nuevo;
	
	cout<< "\t Bienvenido al Vito - parqueadero."<<endl;
	cout<< "1. Consultar la cantidad de espacios vacios."<<endl;
	cout<< "2. Consultar la cantidad de vehiculos de cada categoria que estan estacionados."<<endl;
	cout<< "3. Ingresar vehiculo."<<endl;
	cout<< "4. Salir."<<endl;
	cout<< "Por favor elija la opcion que desea realizar: ";
	
	while (scanf("%d", &op)!=EOF){
		
		switch(op){
		
	
		case 0:
			system("cls");
			cout<< "\t Bienvenido al Vito - parqueadero."<<endl;
			cout<< "1. Consultar la cantidad de espacios vacios."<<endl;
			cout<< "2. Consultar la cantidad de vehiculos de cada categoria que estan estacionados."<<endl;
			cout<< "3. Ingresar vehiculo."<<endl;
			cout<< "4. Salir."<<endl;
			cout<< "Por favor elija la opcion que desea realizar: ";
			break;
		
		case 1:
			system("cls");
			for(int i=0;i<2;i++){
		
				for(int k=0;k<10;k++){
					if(arreglo[i][k]==0){
						
						vacio+=1;
					}
				}
				
			}
			cout<<" Tenemos "<<vacio<<" espacio(s) vacio(s)."<<endl;
			cout<<" Presione 4 para Salir."<<endl;
			cout<<" Presione 0 para volver al menu principal."<<endl;
			cout<<" Por favor digite el numero de una opcion: ";
			break;
		case 2:
			system("cls");
			for(int i=0;i<2;i++){
		
				for(int k=0;k<10;k++){
					if(arreglo[i][k]==1){
						
						moto+=1;
					}
					else if(arreglo[i][k]==2){
						
						a5+=1;
					}
					else if(arreglo[i][k]==3){
						
						a7+=1;
					}
				}
				
			}
			cout<<" Tenemos "<<moto<<" moto(s) estacionada(s) en nuestro parqueadero."<<endl;
			cout<<" Tenemos "<<a5<<" auto(s) sedan de 5 puestos estacionado(s) en nuestro parqueadero."<<endl;
			cout<<" Tenemos "<<a7<<" auto(s) de 7 pasajeros estacionado(s) en nuestro parqueadero."<<endl;
			cout<<" Presione 4 para Salir."<<endl;
			cout<<" Presione 0 para volver al menu principal."<<endl;
			cout<<" Por favor digite el numero de una opcion: ";
			break;
		case 3:
			system("cls");
			cout<<"Por favor ingrese el tipo de vehiculo que desea ingresar a nuestro parqueadero."<<endl;
			cout<<"1. Moto"<<endl;
			cout<<"2. Auto sedan 5 puestos"<<endl;
			cout<<"3. Auto de 7 pasajeros"<<endl;
			cout<<"Opcion: ";
			cin>>nuevo;
			for(int i=0;i<2;i++){
		
				for(int k=0;k<10;k++){
					if(arreglo[i][k]==0){
						arreglo[i][k]=nuevo;
						vacio+=1;
						break;
					}
				}
				if(vacio!=0){
					break;
				}
			}
			if(vacio!=0){
				cout<<"Su vehiculo ha sido ingresado de manera exitosa en nuestro parqueadero."<<endl;
			}
			else{
				
				cout<<"Lamentablemente su vehiculo no ha sido ingresado debido a que no encontramos espacios disponibles."<<endl;
			}
			cout<<" Presione 4 para Salir."<<endl;
			cout<<" Presione 0 para volver al menu principal."<<endl;
			cout<<" Por favor digite el numero de una opcion: ";			
			break;
		default:
			if(op==4){
				
				break;
			}
			else{
				
				cout<<" Opcion no valida."<<endl;
				cout<<" Presione 0 para volver al menu principal: ";
			}
		
			
			
	}
	
		if(op==4){
		
			break;
	}		
		vacio=0; 
		moto=0;
		a5=0;
		a7=0;
	
	}
	
		return 0;
}
