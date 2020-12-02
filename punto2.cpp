//punto2
#include<iostream>
using namespace std;

struct estudiante{
	
	string nombre;
	int edad;
	int id;
	int semestre;
	
};


int main (){
	
	struct estudiante one_student;
	cout<<"Por favor ingrese los datos del nuevo estudiante: "<<endl;
	cout<<"Nombre (separado por guion bajo): "<<endl; 
	cin>>one_student.nombre;
	cout<<"Edad: "<<endl;
	cin>>one_student.edad;
	cout<<"Documento de identidad: "<<endl;
	cin>>one_student.id;
	cout<<"Semestre academico: "<<endl;
	cin>>one_student.semestre;
	
	
	return 0;
}
