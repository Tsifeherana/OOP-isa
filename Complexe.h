#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED
class Complexe
{
    private:
        double m_reel;
        double m_Image;
    public:
        Complexe();
        ~Complexe();
        void additions(Complexe b);
        void soustractions(Complexe b);
        void multiplications(Complexe b);
        void divisions(Complexe b);
        void setReel(double reel);
        double getReel();
        void setIm(double im);
        double getIm();
};
#endif