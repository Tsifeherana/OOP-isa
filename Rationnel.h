#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED

class Rationnel
{
private:
    int m_denominateur;
    int m_numerateur;

public:
    Rationnel();
    ~Rationnel();
    void setDenominateur(int denominateur);
    int getDenominateur();
    void setNumerateur(int numerateur);
    int getNumerateur();
    void afficher_fraction();
    void afficher_decimal();
    void afficher_Rationnel();

    Rationnel addition(Rationnel b);
    Rationnel multiplication(Rationnel b);
    Rationnel division(Rationnel b);
    Rationnel soustraction(Rationnel b);
};

#endif