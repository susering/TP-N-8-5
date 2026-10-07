#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rectangulo {
private:
	int base;
	int altura;
public:
	Rectangulo(int base, int altura);
	int perimetro() const;
	int area() const;

};

Rectangulo::Rectangulo(int base, int altura) : base(base), altura(altura) {}

int Rectangulo::perimetro() const {
	return base*2 + altura*2;
}

int Rectangulo::area() const {
	return base*altura;
}

int main()
{
	vector<Rectangulo>medidas;

	int base;
	int altura;

	for(int i = 0; i<3 ; i++) {
		cout<<"Base: ";
		cin>>base;
		cout<<"Altura: ";
		cin>>altura;
		medidas.push_back(Rectangulo(base, altura));
	}

	for(const Rectangulo& R : medidas) {
		cout<<"Perimetro: "<< R.perimetro();
		cout<<"Area: "<< R.area();
		cout<<endl;
	}

	return 0;
}