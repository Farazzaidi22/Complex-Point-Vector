#include <iostream>
#include <string>
#include <string.h>
#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector();
        Vector(int, int, int);
        int seti(int);
        int geti();
        int setj(int);
        int getj();
        int setk(int);
        int getk();
        void display();
        Vector operator+(Vector);
        Vector operator-(Vector);
        double dotpro(Vector);
        void sdisplay();
        Vector crosspro(Vector);

    private:
        int i,j,k;
};

#endif // VECTOR_H
