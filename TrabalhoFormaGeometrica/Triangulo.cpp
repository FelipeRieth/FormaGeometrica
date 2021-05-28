#include "Triangulo.h";


void Triangulo::SetBase(float x) {
	this->base = x;
}
void Triangulo::SetAltura(float x) {
	this->altura = x;
}

void Triangulo::CalcularArea() {
	cout << "Area do Triangulo: " <<( this->base * this->altura ) / 2<< " metros quadrados\n";
}