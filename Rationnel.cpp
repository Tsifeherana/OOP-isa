#include "namespace.h"
#include <iostream>
#include <string>

using namespace isa;
Rationnel::Rationnel(){}
Rationnel::~Rationnel(){}

void Rationnel::setDenominateur(int denominateur)
{
    m_denominateur = denominateur;
}
int Rationnel::getDenominateur()
{
    return m_denominateur;
}
void Rationnel::setNumerateur(int numerateur)
{
    m_numerateur = numerateur;
}
int Rationnel::getNumerateur()
{
    return m_numerateur;
}
Rationnel Rationnel::addition(Rationnel b)
{
    Rationnel sum;
    if (m_denominateur == b.getDenominateur())
    {
        sum.setNumerateur(m_numerateur+b.getNumerateur());
        sum.setDenominateur(b.getDenominateur());
    }
    else 
    {   
        sum.setNumerateur(m_numerateur*b.getDenominateur() + m_denominateur*b.getNumerateur());
        sum.setDenominateur( m_denominateur*b.getDenominateur());
    }   
    return sum;  
}
Rationnel Rationnel::multiplication(Rationnel b)
{
    Rationnel mult;
    mult.setNumerateur(m_numerateur*b.getNumerateur());
    mult.setDenominateur(m_denominateur*b.getDenominateur()); 
    return mult;
}
Rationnel Rationnel::soustraction(Rationnel b)
{
    Rationnel soustraction;
    if (m_denominateur == b.getDenominateur())
    {
        soustraction.setNumerateur(m_numerateur+b.getNumerateur());
        soustraction.setDenominateur(b.getDenominateur());
    }
    else 
    {   
        soustraction.setNumerateur(m_numerateur*b.getDenominateur() - m_denominateur*b.getNumerateur());
        soustraction.setDenominateur( m_denominateur*b.getDenominateur());
    }   
    return soustraction;
}
Rationnel Rationnel::division(Rationnel b)
{
    Rationnel div;
    div.setNumerateur(m_numerateur*b.getDenominateur());
    div.setDenominateur(m_denominateur*b.getNumerateur());
    return div;
}
void Rationnel::afficher_decimal()
{
    std::cout << m_numerateur/m_denominateur << std::endl;
}
void Rationnel::afficher_fraction()
{
    std::cout << m_numerateur << "/" << m_denominateur << std::endl;
}
void Rationnel::afficher_Rationnel()
{
    std::cout << m_numerateur << "/" << m_denominateur <<std::endl;
}

