#include "namespace.h"
#include <iostream>

using namespace isa;

isa::Arithmetic::Arithmetic()
{}
isa::Arithmetic::~Arithmetic()
{}

isa::Complexe isa::Arithmetic::add(isa::Complexe a, int b)
{
    Complexe c;
    c.setReel(a.getReel()+b);
    c.setIm(a.getIm());
    return c;
}
isa::Complexe isa::Arithmetic::add(int a, isa::Complexe b)
{
    Complexe c;
    c.setReel(b.getReel()+a);
    c.setIm(b.getIm());
    return c;
}
isa::Rationnel isa::Arithmetic::add(int a, isa::Rationnel b)
{
    Rationnel c;
    c.setNumerateur(a*b.getDenominateur()+b.getNumerateur());
    c.setDenominateur(b.getDenominateur());
    return c;
}
isa::Rationnel isa::Arithmetic::add(Rationnel a, int b)
{
    Rationnel c;
    c.setNumerateur(b*a.getDenominateur()+a.getNumerateur());
    c.setDenominateur(a.getDenominateur());
    return c;
}
float isa::Arithmetic::add(Rationnel a, float b)
{
    float c;
    c = (a.getNumerateur()+b*a.getDenominateur())/a.getDenominateur();
    return c;
}
float isa::Arithmetic::add(float a, Rationnel b)
{
    float c;
    c = (b.getNumerateur()+a*b.getDenominateur())/b.getDenominateur();
    return c;
}



isa::Complexe isa::Arithmetic::substract(isa::Complexe a, int b)
{
    Complexe c;
    c.setReel(a.getReel()-b);
    c.setIm(a.getIm());
    return c;
}
isa::Complexe isa::Arithmetic::substract(int a, isa::Complexe b)
{
    Complexe c;
    c.setReel(b.getReel()-a);
    c.setIm(b.getIm());
    return c;
}
isa::Rationnel isa::Arithmetic::substract(int a, isa::Rationnel b)
{
    Rationnel c;
    c.setNumerateur(a*b.getDenominateur()-b.getNumerateur());
    c.setDenominateur(b.getDenominateur());
    return c;
}
isa::Rationnel isa::Arithmetic::substract(Rationnel a, int b)
{
    Rationnel c;
    c.setNumerateur(b*a.getDenominateur()-a.getNumerateur());
    c.setDenominateur(a.getDenominateur());
    return c;
}
float isa::Arithmetic::substract(Rationnel a, float b)
{
    float c;
    c = (a.getNumerateur()-b*a.getDenominateur())/a.getDenominateur();
    return c;
}
float isa::Arithmetic::substract(float a, Rationnel b)
{
    float c;
    c = (b.getNumerateur()-a*b.getDenominateur())/b.getDenominateur();
    return c;
}

