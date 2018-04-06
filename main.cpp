#include <iostream>
#include <string>
#include <string.h>
#include "Complex.h"
#include "Point.h"
#include "Vector.h"
using namespace std;

int main()
{
    int x;
    once:
    cout<<"1 for complex number cal \n2 for Point cal \n3 for vector cal \n4 for exiting program \n\nEnter: ";
    cin>>x;

    switch(x)
    {
    case 1:
    {
    float e,f;
    Complex z1;
    z1.setreal(e);
    z1.setimg(f);
    Complex z2(z1);
    Complex z3;
    float a,b,c,d;
    a=z1.getreal();
    cout<<"Your real number is : "<<a;
    b=z1.getimg();
    cout<<" | Your img number is: "<<b<<"i";
    c=z2.getreal();
    cout<<"\nYour real number is : "<<c;
    d=z2.getimg();
    cout<<" | Your img number is: "<<d<<"i";

    //z3=z1.add(z1, z2);
    again:
    char ch;
    cout<<"\n\n+\n-\n*\n/\np for printing\nEnter your operator or q for quiting: ";
    cin>>ch;
    switch(ch)
    {
     case '+':
     z3=z1+z2;
     z3.display();
     break;

    case '-':
     z3=z1-z2;
     z3.display();
     break;

     case '*':
     z3=z1*z2;
     z3.display();
     break;

     case '/':
     z3=z1/z2;
     z3.display();
     break;

     case 'p':
        cout<<z1;
        break;

     /*case '=':
        {
            z2=z1;
            cout<<z2;
        }*/

     case 'q':
     cout<<"\nThank you :)";
     break;

     default:
        cout<<"\nInvalid input";
        goto again;
        }
   }
   break;

     case 2:
        {
            double x1,y1;
            Point A,B;
            A.setx(x1);
            A.sety(y1);
            cout<<"\nA=";
            A.display();
            double x2,y2;
            B.setx(x2);
            B.sety(y2);
            cout<<"\nB=";
            B.display();
            Point *C;
            double x3,y3;
            cout<<"\n\nEnter x co-ordinate: ";
            cin>>x3;
            cout<<"Enter y co-ordinate: ";
            cin>>y3;
            C= new Point(x3,y3);
            cout<<"\nC=";
            C->display();
            Point D;
            char ch;
            ag:
            cout<<"\n\nEnter \n+ for addition \n- for subtraction \n> for finding out greater than \np for printing \nr for checking \nq for quiting \n\nEnter your operator: ";
            cin>>ch;

            switch(ch)
            {
            case '+':
            D=A+B+*C;
            cout<<"\nYour Answer is D=";
            D.display();
            break;

            case '-':
            D=A-B-*C;
            cout<<"\nYour Answer is D=";
            D.display();
            break;

            case '>':
                if(A>B)
                {
                    cout<<"\nPoint A is greater than B";
                }
                else
                {
                    cout<<"\nPoint B is greater than A";
                }
                break;

            case 'p':
                cout<<B;
                break;

            case 'r':
                if(A()==true)
                {
                    cout<<"\nA is point";
                }
                else
                {
                    cout<<"\nA is not a point";
                }

            /*case 'c':
                {
                    double p;
                    D=(Point)p;
                    cout<<D.display();
                }*/

            case 'q':
                cout<<"\nThank you :)";
                break;

            default:
                cout<<"\nSorry invalid input";
                goto ag;
            }

        }
        break;

     case 3:
        {
            Vector v1,v2,v3;
            int i1,j1,i2,j2;
            v1.seti(i1);
            v1.setj(j1);
            v1.display();
            v2.seti(i2);
            v2.setj(j2);
            v2.display();

            char ch;
            cout<<"\n\n+ for adding vectors \n- for subtracting vectors \n. for dot product vectors \nx for cross product of vectors";
            cout<<"\nEnter: ";
            cin>>ch;
            switch(ch)
            {
            case '+':
                v3=v1+v2;
                cout<<"\n";
                v3.display();
                break;

            case '-':
                v3=v1-v2;
                cout<<"\n";
                v3.display();
                break;

            case'.':
                {
                    Vector vt;
                    cout<<"\n";
                    v3.dotpro(vt);
                    break;
                }

            case 'x':
                Vector v;
                cout<<"\n";
                v3.crosspro(v);
                break;
            }
        }

            case 4:
                cout<<"\nThanks :)";
                break;

            default:
                cout<<"\nInvalid input please choose again\n\n";
                goto once;

    }

}
