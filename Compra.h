#ifndef COMPRA_H_INCLUDED 
#define COMPRA_H_INCLUDED
#include "Rationnel.h"
class Compra
{
    private:
        Rationnel m_Reel;
        Rationnel m_Im;
    public:
        Compra();
        ~Compra();
        void setReel(Rationnel reel);
        Rationnel getReel();
        void setIm(Rationnel im);
        Rationnel getIm();
        Compra additionRC(Compra c);
        Compra soustractionRC(Compra c);
        Compra multiplicationRC(Compra c);
        Compra divisionRC(Compra c);
        void afficherRC();
};
#endif //COMPRA_H_INCLUDED