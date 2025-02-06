#include "namespace.h"
#include <iostream>
using namespace isa;

Complexe::Complexe(){}
Complexe::~Complexe(){}

void Complexe::additions(Complexe b)
{
    std::cout << m_reel+b.getReel()<< "+ i"<<m_Image+b.getIm() <<std::endl; 
}
void Complexe::soustractions(Complexe b)
{
    std::cout << m_reel-b.getReel()<< "+ i"<<m_Image-b.getIm() <<std::endl; 
}
void Complexe::divisions(Complexe b)
{
    std::cout << m_reel/b.getReel()<< "+ i"<<m_Image/b.getIm() <<std::endl; 
}
void Complexe::multiplications(Complexe b)
{
    std::cout << m_reel*b.getReel()-b.getIm()*m_Image<< "+ i"<<m_reel*b.getIm()+m_Image*b.getReel() <<std::endl; 
}
void Complexe::setIm(double im)
{
    m_Image = im;
}
double Complexe::getIm()
{
    return m_Image;
}
void Complexe::setReel(double reel)
{
    m_reel = reel;
}
double Complexe::getReel()
{
    return m_reel;
}
