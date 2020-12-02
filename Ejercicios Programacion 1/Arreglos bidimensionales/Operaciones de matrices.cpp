//2.5
#include<iostream>
using namespace std;


int main (){
	
	int op,x,y,x1,y1,aux,valor=0,esc;
	
	cout<< "\t Bienvenido a la calculadora de matrices."<<endl;
	cout<< "1. Suma."<<endl;
	cout<< "2. Resta."<<endl;
	cout<< "3. Multiplicacion."<<endl;
	cout<< "4. Traspuesta."<<endl;
	cout<< "5. Multiplicacion de una matriz por un escalar."<<endl;
	cout<< "6. Salir."<<endl;
	cout<< "Por favor elija la operacion de matrices que desea realizar: ";
	
	while (scanf("%d", &op)!=EOF){
		
		switch(op){
		
	
			case 0:
				system("cls");
				cout<< "\t Bienvenido a la calculadora de matrices."<<endl;
				cout<< "1. Suma."<<endl;
				cout<< "2. Resta."<<endl;
				cout<< "3. Multiplicacion."<<endl;
				cout<< "4. Traspuesta."<<endl;
				cout<< "5. Multiplicacion de una matriz por un escalar."<<endl;
				cout<< "6. Salir."<<endl;
				cout<< "Por favor elija la operacion de matrices que desea realizar: ";
				break;
			
			case 1:
				{
					system("cls");
					cout<<"Por favor ingrese el tamaño de las matrices a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
					cin>>x;
					cin>>y;
					int matriz1[x][y];
					int matriz2[x][y];
					int suma[x][y];
					for(int w=0; w<2; w++){
						cout<<"Digite la matriz "<<w<<" de la siguiente forma: "<<endl;
						cout<<"2 3"<<endl;
						cout<<"1 4"<<endl;
						cout<<"7 9"<<endl<<endl;
										
						for(int i=0;i<x;i++){
				
							for(int k=0;k<y;k++){
								
								if(w==0){
								
									cin>>aux;
									matriz1[i][k]=aux;
								}
								else{
									cin>>aux;
									matriz2[i][k]=aux;
								}
							}
						}
					}
								
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y;k++){
								
							suma[i][k]=matriz1[i][k]+matriz2[i][k];
						}
					}
					cout<<"La matriz resultado de la operacion suma es: "<<endl;
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y;k++){
								
							cout<<"\t"<<suma[i][k];
						}
						cout<<endl;	
					}
					
					cout<<" Presione 6 para Salir."<<endl;
					cout<<" Presione 0 para volver al menu principal."<<endl;
					cout<<" Por favor digite el numero de una opcion: ";
				}
				break;
				
			case 2:
				{
					system("cls");				
					cout<<"Por favor ingrese el tamaño de las matrices a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
					cin>>x;
					cin>>y;
					int matriz1[x][y];
					int matriz2[x][y];
					int resta[x][y];	
					for(int w=0; w<2; w++){
						cout<<"Digite la matriz "<<w<<" de la siguiente forma: "<<endl;
						cout<<"2 3"<<endl;
						cout<<"1 4"<<endl;
						cout<<"7 9"<<endl<<endl;
										
						for(int i=0;i<x;i++){
				
							for(int k=0;k<y;k++){
								
								if(w==0){
								
									cin>>aux;
									matriz1[i][k]=aux;
								}
								else{
									cin>>aux;
									matriz2[i][k]=aux;
								}
							}
						}
					}
								
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y;k++){
								
							resta[i][k]=matriz1[i][k]-matriz2[i][k];
						}
					}
					cout<<"La matriz resultado de la operacion resta es: "<<endl;
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y;k++){
								
							cout<<"\t"<<resta[i][k];
						}
						cout<<endl;	
					}
					
					cout<<" Presione 6 para Salir."<<endl;
					cout<<" Presione 0 para volver al menu principal."<<endl;
					cout<<" Por favor digite el numero de una opcion: ";
				}
				break;
				
			
			case 3:
				{
					system("cls");				
					cout<<"Por favor ingrese el tamaño de la primera matriz a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
					cin>>x;
					cin>>y;
					int matriz1[x][y];
					cout<<"Por favor ingrese el tamaño de la segunda matriz a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
					cin>>x1;
					cin>>y1;
					int matriz2[x1][y1];
					if(y==x1){
						int mult[x][y1];	
						cout<<"Digite la matriz 1 de la siguiente forma: "<<endl;
						cout<<"2 3"<<endl;
						cout<<"1 4"<<endl;
						cout<<"7 9"<<endl<<endl;
										
						for(int i=0;i<x;i++){
				
							for(int k=0;k<y;k++){
								
								cin>>aux;
								matriz1[i][k]=aux;
							}
						}
						cout<<"Digite la matriz 2 de la siguiente forma: "<<endl;
						cout<<"2 3"<<endl;
						cout<<"1 4"<<endl;
						cout<<"7 9"<<endl<<endl;
										
						for(int i=0;i<x1;i++){
				
							for(int k=0;k<y1;k++){
								
								cin>>aux;
								matriz2[i][k]=aux;
								
							}
						}		
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y1;k++){
							for(int z=0; z<y;z++){
								valor+=(matriz1[i][z]*matriz2[z][k]);
							}
							mult[i][k]=valor;
							valor=0;
						}
					}
					cout<<"La matriz resultado de la multiplcacion entre las dos matrices es: "<<endl;
					for(int i=0;i<x;i++){
			
						for(int k=0;k<y1;k++){
								
							cout<<"\t"<<mult[i][k];
						}
						cout<<endl;	
					}
					}
					
					else{
						cout<<"Opcion no valida. Las matrices digitadas no cumplen con la condicion de que el numero de columnas de la primera sea igual al numero de filas de la segunda "<<endl;
					}
					
					cout<<" Presione 6 para Salir."<<endl;
					cout<<" Presione 0 para volver al menu principal."<<endl;
					cout<<" Por favor digite el numero de una opcion: ";
				}
				break;
				
			
			case 4:
					{
					system("cls");
					cout<<"Por favor ingrese el tamaño de la matriz a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
					cin>>x;
					cin>>y;
					int matriz1[x][y];
					int tras[y][x];
						cout<<"Digite la matriz de la siguiente forma: "<<endl;
						cout<<"2 3"<<endl;
						cout<<"1 4"<<endl;
						cout<<"7 9"<<endl<<endl;
										
						for(int i=0;i<x;i++){
				
							for(int k=0;k<y;k++){
								
								cin>>aux;
								matriz1[i][k]=aux;
							
							}
						}
													
					for(int i=0;i<y;i++){
			
						for(int k=0;k<x;k++){
								
							tras[i][k]=matriz1[k][i];
						}
					}
					cout<<"La matriz traspuesta es: "<<endl;
					for(int i=0;i<y;i++){
			
						for(int k=0;k<x;k++){
								
							cout<<"\t"<<tras[i][k];
						}
						cout<<endl;	
					}
					
					cout<<" Presione 6 para Salir."<<endl;
					cout<<" Presione 0 para volver al menu principal."<<endl;
					cout<<" Por favor digite el numero de una opcion: ";
				}
				break;
				
			case 5:
			{
				system("cls");
				cout<<"Por favor ingrese el tamaño de la matriz a operar (De la forma 3 2, siendo 3 la cantidad de filar, y 2 el numero de columnas): ";
				cin>>x;
				cin>>y;
				int matriz1[x][y];
				int matrize[x][y];
				cout<<"Digite la matriz de la siguiente forma: "<<endl;
				cout<<"2 3"<<endl;
				cout<<"1 4"<<endl;
				cout<<"7 9"<<endl<<endl;
										
				for(int i=0;i<x;i++){
				
					for(int k=0;k<y;k++){
								
						cin>>aux;
						matriz1[i][k]=aux;
							
					}
				}
				
				cout<<"Digite el escalar para realizar la operacion: ";
				cin>>esc;	
													
				for(int i=0;i<x;i++){
			
					for(int k=0;k<y;k++){
								
						matrize[i][k]=matriz1[i][k]*esc;
					}
				}
				cout<<"La matriz resultado es: "<<endl;
				for(int i=0;i<x;i++){
			
					for(int k=0;k<y;k++){
								
						cout<<"\t"<<matrize[i][k];
					}
					cout<<endl;	
				}
					
				cout<<" Presione 6 para Salir."<<endl;
				cout<<" Presione 0 para volver al menu principal."<<endl;
				cout<<" Por favor digite el numero de una opcion: ";
			}
			break;
						
			default:
				if(op==6){
					
					break;
				}
				else{
					
					cout<<" Opcion no valida."<<endl;
					cout<<" Presione 0 para volver al menu principal: ";
				}
				
			
				
				
		}
	
		if(op==6){
		
			break;
	}		
	
	
	}
	
		return 0;
}
