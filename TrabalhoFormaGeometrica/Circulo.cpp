#include "Circulo.h";


void Circulo::SetRaio(float x) {
	this->raio = x;
}

void Circulo::CalcularArea() {
	cout << "Area do Circulo: " << 3.14 *  (this->raio * this->raio) << " metros quadrados\n";
}