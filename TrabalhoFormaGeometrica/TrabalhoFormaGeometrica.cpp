
#include <iostream>
#include "Retangulo.h";
#include "Triangulo.h";
#include "Circulo.h";
int main()
{
    Retangulo r;
    r.SetBase(2);
    r.SetAltura(3);
    r.CalcularArea();

    Triangulo t;
    t.SetBase(6);
    t.SetAltura(3);
    t.CalcularArea();

    Circulo c;
    c.SetRaio(1);
    c.CalcularArea();

}

