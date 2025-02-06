#include "namespace.h"
#include <iostream>

using namespace isa;
Compra::Compra()
{}
Compra::~Compra()
{}

void Compra::setReel(Rationnel reel)
{
    m_Reel.setNumerateur(reel.getNumerateur());
    m_Reel.setDenominateur(reel.getDenominateur());
}

Rationnel Compra::getReel()
{
    return m_Reel;
}
void Compra::setIm(Rationnel im)
{
    m_Im.setNumerateur(im.getNumerateur());
    m_Im.setDenominateur(im.getDenominateur()); 
}
Rationnel Compra::getIm()
{
    return m_Im;
}
Compra Compra::additionRC(Compra c)
{
    Compra sums; 
    sums.setReel(m_Reel.addition(c.getReel()));
    sums.setIm(m_Im.addition(c.getIm()));
    return sums;
}
Compra Compra::soustractionRC(Compra c)
{
    Compra sous;
    sous.setReel(m_Reel.soustraction(c.getReel()));
    sous.setIm(m_Im.soustraction(c.getIm()));
    return sous;
}
Compra Compra::multiplicationRC(Compra c)
{
    Compra mults;
    mults.setReel( (m_Reel.multiplication(c.getReel())).soustraction(m_Im.multiplication(c.getIm())));
    mults.setIm(m_Reel.multiplication(c.getIm()).addition(m_Im.multiplication(c.getReel())));
    return mults;
}
Compra Compra::divisionRC(Compra c)
{
    Compra divs;
    divs.setReel(m_Reel.division(c.getReel()));
    divs.setIm(m_Im.division(c.getIm()));
    return divs;
}
void Compra::afficherRC()
{
    std::cout<< m_Reel.getNumerateur() << "/" << m_Reel.getDenominateur() << "+ i" << m_Im.getNumerateur() << "/"<< m_Im.getDenominateur() <<std::endl;
}