#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Alumno {
private:
	string nombre;
	int nota1, nota2, nota3;
	
public:
	Alumno(string nombre, int nota1, int nota2, int nota3);
	string getNombre();
	int getNota1();
	int getNota2();
	int getNota3();
};

Alumno::Alumno(string nombre, int nota1, int nota2, int nota3) {
	this->nombre = nombre;
	this->nota1 = nota1;
	this->nota2 = nota2;
	this->nota3 = nota3;
}

string Alumno::getNombre() {
	return nombre;
}

int Alumno::getNota1() {
	return nota1;
}

int Alumno::getNota2() {
	return nota2;
}

int Alumno::getNota3() {
	return nota3;
}

int main() {
	//variables
	string nombre;
	int nota1, nota2, nota3;
	
	//vector
	vector<Alumno> alumnos;
	
	for(int i=0; i<3; i++) {
		cout<<"Ingrese nombre del alumno: "; getline(cin, nombre);
		cout<<endl;
		cout<<"Ingrese las notas del alumno: "; cin>>nota1>>nota2>>nota3;
		cout<<endl;
		cin.ignore();
		alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));	
	}
	
	cout<<"Muestra de informacion"<<endl;
	
	for(Alumno alumno : alumnos) {
		cout<<" Nombre: "<<alumno.getNombre()<<endl;
		cout<<" Nota1: "<<alumno.getNota1()<<endl;
		cout<<" Nota2: "<<alumno.getNota2()<<endl;
		cout<<" Nota3: "<<alumno.getNota3()<<endl;
	}
	
	
	
	return 0;
}
