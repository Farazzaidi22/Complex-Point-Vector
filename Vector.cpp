#include <iostream>
#include <string>
#include <string.h>
#include "Vector.h"
#include <math.h>

using namespace std;

Vector::Vector()
{
    this->i=0;
    this->j=0;
    this->k=0;
}

Vector::Vector(int it, int jt, int kt)
{
    this->i=it;
    this->j=jt;
    this->k=kt;
}

int Vector::seti(int i_in)
{
    cout<<"\nEnter x component of the vector: ";
    cin>>i_in;
    this->i=i_in;
}

int Vector::geti()
{
    return this->i;
}

int Vector::setj(int j_in)
{
    cout<<"Enter y component of the vector: ";
    cin>>j_in;
    this->j=j_in;
}

int Vector::getj()
{
    return this->j;
}

Vector Vector::operator+(Vector v1)
{
    Vector temp;
    temp.i=this->i+v1.i;
    temp.j=this->j+v1.j;
    return temp;
}

Vector Vector::operator-(Vector v1)
{
    Vector temp;
    temp.i=this->i-v1.i;
    temp.j=this->j-v1.j;
    return temp;
}

double Vector::dotpro(Vector v1)
{
    /*Vector temp;
    temp.i=this->i*v1.i;
    temp.j=this->j*v1.j;*/
    double v2;
    v2=(this->i*v1.i)+(this->j*v1.j);
    cout<<"\nDot product of given vectors is: "<<v2;
    return v2;
}

Vector Vector::crosspro(Vector v1)
{
    Vector v;
    v.i=this->i*v1.j;
    v.j=this->j*v1.i;
    cout<<"\nThe cross product of vectors is: "<<v.i<<"i"<<" - "<<v.j<<"j";
    return v;
}

void Vector::display()
{
    cout<<"\nYour vector is: "<<this->i<<"i"<<" + "<<this->j<<"j";
}

