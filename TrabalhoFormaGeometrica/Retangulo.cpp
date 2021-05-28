#include "Retangulo.h";


void Retangulo::SetBase(float x) {
	this->base = x;
}
void Retangulo::SetAltura(float x) {
	this->altura = x;
}

void Retangulo::CalcularArea() {
	cout << "Area do Retangulo: " << this->base * this->altura << " metros quadrados\n";
}