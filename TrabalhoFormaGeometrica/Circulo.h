
#pragma once
#include "FormaGeometrica.h"
class Circulo : public FormaGeometrica {
private:
	float raio = 0;

public:
	void SetRaio(float x);
	void CalcularArea();


};