#include <iostream>
#include <string>
#include <string.h>
#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
    public:
        Point();
        Point(double, double);
        //Point(Point& clone);
        double setx(double);
        double sety(double);
        double getx();
        double gety();
        double display();
        Point operator +(Point);
        Point operator -(Point);
        bool operator > (Point& );

        //<< overloading
        friend ostream &operator << (ostream& out, Point &G)
        {
            out<<"\n("<<G.x;
            out<<","<<G.y<<")";
            return out;
        }


        bool operator ()();
        /*Point (double& p)
        {
            this->x=p.getx();
            this->y=p.gety();
        }*/

        //Point operator /(Point);

    private:
        double x;
        double y;
};


#endif // POINT_H
