#ifndef Complex_H
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex();
        Complex(float, float);
        Complex(Complex& clone);
        float setreal(float );
        float setimg(float );
        float getreal();
        float getimg();
        //Complex add(Complex, Complex);
        void display();
        Complex operator +(Complex);
        Complex operator -(Complex);
        Complex operator *(Complex);
        Complex operator /(Complex);


          //<< overloading
        friend ostream &operator << (ostream& out, Complex &G)
        {
            out<<"\n\nreal number is: " <<G.real;
            out<<"\nimg number is: " <<G.img<<"i";
            return out;
        }

        /*Complex& operator=(Complex& c)
        {
            float x,y;
            if(this != &c)
            {
                real=c.setreal(x);
                img=c.setimg(y);
            }
            return *this;
        }*/

    private:
        float real;
        float img;
};

#endif // Complex_H


#endif // COMPLEX_H
