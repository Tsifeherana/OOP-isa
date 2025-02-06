#include "namespace.h"
#include <iostream>
using namespace isa;
int main()
{
    Rationnel a;
    Rationnel b;
    a.setNumerateur(2);
    a.setDenominateur(3);
    b.setNumerateur(1);
    b.setDenominateur(2);
    Compra c;
    c.setReel(a);
    c.setIm(b);
    Rationnel e;
    Rationnel f;
    e.setNumerateur(2);
    e.setDenominateur(3);
    f.setNumerateur(1);
    f.setDenominateur(2);
    Compra(d);
    d.setReel(e);
    d.setIm(f);
    c.multiplicationRC(d).afficherRC();

    //arithmetic;
    Complexe sum = Arithmetic::add(2.5,a);
    return 0;
}