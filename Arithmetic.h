#ifndef ARITHMETIC_H_INCLUDED
#define ARITHMETIC_H_INCLUDED


class Arithmetic
{
    public:
        Arithmetic();
        ~Arithmetic();
        static Complexe add(Complexe a, int b);
        static Complexe add(int a, Complexe b);
        static Rationnel add(int a, Rationnel b);
        static Rationnel add(Rationnel a, int b);
        static float add(Rationnel a, float b);
        static float add(float a, Rationnel b);
        
        static Complexe substract(Complexe a, int b);
        static Complexe substract(int a, Complexe b);
        static Rationnel substract(int a, Rationnel b);
        static Rationnel substract(Rationnel a, int b);
        static float substract(Rationnel a, float b);
        static float substract(float a, Rationnel b);
};
#endif //ARITHMETIC_H_INCLUDED