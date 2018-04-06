#include <iostream>
#include <string>
#include <string.h>
#include "Point.h"
using namespace std;

Point::Point()
{
    this->x=0;
    this->y=0;
}

Point::Point(double x_co, double y_co)
{
    this->x=x_co;
    this->y=y_co;
}

double Point::setx(double x_co)
{
    cout<<"\nEnter x co-ordinate: ";
    cin>>x_co;
    this->x=x_co;
}

double Point::sety(double y_co)
{
    cout<<"Enter y co-ordinate: ";
    cin>>y_co;
    this->y=y_co;
}

/*double Point::getx()
{
    return this->x;
}

double Point::gety()
{
    return this->y;
}*/

Point Point::operator+(Point C)
{
    Point temp;
    temp.x=this->x + C.x;
    temp.y=this->y + C.y;
    return temp;
}

Point Point::operator-(Point C)
{
    Point temp;
    temp.x=this->x - C.x;
    temp.y=this->y - C.y;
    return temp;
}

double Point::display()
{
    cout<<"("<<this->x<<","<<this->y<<")";
}

bool Point:: operator > (Point &F)
{
    if(this-> x > F.x && this->y > F.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool Point::operator()()
{
    return true;
}


