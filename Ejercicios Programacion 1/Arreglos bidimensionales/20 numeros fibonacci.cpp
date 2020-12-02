//2.3
#include<iostream>
using namespace std;


int main (){
	
	int arreglo[2][10];
	int ant=0, man=1;
	
	
	for(int i=0;i<2;i++){
		
		for(int k=0;k<10;k++){
			
			if(i==0 && k==0){
				
				arreglo [i][k]=ant;
			}
			
			else if(i==0 && k==1){
				
				arreglo [i][k]=man;
			}
			
			else {
			
				arreglo[i][k]=ant+man;
				ant=man;
				man=arreglo[i][k];
					
			}
		}
					
	}
	
	for(int i=0;i<2;i++){
		
		for(int k=0;k<10;k++){
			cout<<"\t"<<arreglo[i][k];
		}
		cout<<endl;		
	}
		
	
	
	return 0;
}
