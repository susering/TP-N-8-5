#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona(string nombre, int edad);
	string getNombre() const;
	int getEdad() const;
};

Persona::Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

string Persona::getNombre() const {
	return nombre;
}

int Persona::getEdad() const {
	return edad;
}

int main()
{
	vector<Persona>personas;

	string nombre;
	int edad;

	for(int i=0; i<5; i++) {
		cout<<"Ingrese el nombre de la persona: "<<endl;
		getline(cin, nombre);
		cout<<"Ingrese la edad de la persona: "<<endl;
		cin>>edad;
		cin.ignore();

		personas.push_back(Persona(nombre, edad));
	}

	for(const Persona& p : personas) {
		cout << p.getNombre() << endl;
		cout << p.getEdad() << endl;
		cout << endl;
	}


	return 0;
}