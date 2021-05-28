
#pragma once
#include "FormaGeometrica.h"
class Triangulo : public FormaGeometrica {
private:
	float base = 0;
	float altura = 0;
public:
	void SetBase(float x);
	void SetAltura(float x);
	void CalcularArea();


};