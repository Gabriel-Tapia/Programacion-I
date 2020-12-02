//2.2
#include<iostream>
using namespace std;


int main (){
	
	int n=5;
	int arreglo[n][n];
	
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			if(i==k){
				
				arreglo[i][k]=1;	
			}
			else{
				
				arreglo[i][k]=0;
			}
		}
					
	}
	
	for(int i=0;i<n;i++){
		
		for(int k=0;k<n;k++){
			cout<<"\t"<<arreglo[i][k];
		}
		cout<<endl;		
	}
				
	
	
	
	
	
	return 0;
}
