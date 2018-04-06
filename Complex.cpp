#include <iostream>
#include <string>
#include <string.h>
#include "Complex.h"

using namespace std;

//null constructor
Complex::Complex()
{
    this->real=0;
    this->img=0;
}

//parametrize constructor
Complex::Complex(float r, float i)
{
    this->real=r;
    this->img=i;
}

//copy constructor
Complex::Complex(Complex& clone)
{
    this->real=clone.real;
    this->img=clone.img;
}

//setter functions
float Complex::setreal(float r)
{
    cout<<"\nEnter real part: ";
    cin>>r;
    this->real=r;
}

float Complex::setimg(float i)
{
    cout<<"Enter imaginary part: ";
    cin>>i;
    this->img=i;
    cout<<"\n";
}

//getter functions
float Complex::getreal()
{
    return this->real;
}

float Complex::getimg()
{
    return this->img;
}

/*Complex Complex::add(Complex z1, Complex z2)
{
    Complex a;
    a.real=z1.real+z2.real;
    a.img=z1.img+z2.img;
    return a;
}*/

//display
void Complex::display()
{
    cout<<"\n\nSum of real number is: " <<this->real;
    cout<<"\nSum of img number is: " <<this->img<<"i";
}

//+ overloading
Complex Complex:: operator +(Complex z2)
{
    Complex result;
    result.real=real+z2.real;
    result.img=img+z2.img;
    return result;
}

//- overloading
Complex Complex:: operator -(Complex z2)
{
    Complex result;
    result.real=real-z2.real;
    result.img=img-z2.img;
    return result;
}

Complex Complex:: operator *(Complex z2)
{
    Complex result;
    result.real=real*z2.real;
    result.img=img*z2.img;
    return result;
}

Complex Complex:: operator /(Complex z2)
{
    Complex result;
    result.real=real/z2.real;
    result.img=img/z2.img;
    return result;
}


