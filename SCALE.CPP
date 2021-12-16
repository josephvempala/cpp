#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
int x, y, r, x1, y1, op;
int xs, ys, xe, ye, x2, y2;
int lux, luy, rex, rey, lux1, luy1, rex1, rey1;
int xa, xb, xc, ya, yb, yc, x1a, y1a, x1b, y1b, x1c, y1c;
float sx, sy;
int main(void)
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "c://turboc3//bgi");
    do
    {
        cout << "\n 1.circle";
        cout << "\n 2.Line";
        cout << "\n 3.rectangle";
        cout << "\n 4.Triangle";
        cout << "\n 5.exit";
        cout << "\n enter your choice";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "enter the center and radius if the circle;";
            cin >> x >> y >> r;
            circle(x, y, r);
            cout << "enter the scaling factors";
            cin >> sx >> sy;
            x1 = x * sx;
            y1 = y * sy;
            circle(x1, y1, r);
            break;
        case 2:
            cout << "enter the start and end coordinates";
            cin >> xs >> ys >> xe >> ye;
            line(xs, ys, xe, ye);
            cout << "enter the scaling factors";
            cin >> sx >> sy;
            x1 = xs * sx;
            y1 = ys * sy;
            x2 = xe * sx;
            y2 = ye * sy;
            line(x1, y1, x2, y2);
            break;
        case 3:
            cout << "enetr the left upper and right bottom
                    coordinates ";
                    cin >>
                lux >> luy >> rex >> rey;
            rectangle(lux, luy, rex, rey);
            cout << "enter the scaling factor";
            cin >> sx >> sy;
            lux1 = lux * sx;
            luy1 = luy * sy;
            rex1 = rex * sx;
            rey1 = rey * sy;
            rectangle(lux1, luy1, rex1, rey1);
            break;
        case 4:
            cout << "enter the coordinates of a triangle" << endl;
            cin >> xa >> ya >> xb >> yb >> xc >> yc;
            cout << "original iamge" << endl;
            line(xa, ya, xb, yb);
            line(xb, yb, xc, yc);
            line(xc, yc, xa, ya);
            cout << "scaling" << endl;
            cout << "enter the scaling factor" << endl;
            cin >> sx >> sy;
            x1a = xa * sx;
            y1a = ya * sy;
            x1b = xb * sx;
            y1b = yb * sy;
            x1c = xc * sx;
            y1c = yc * sy;
            cout << "after Scaling" << endl;
            line(x1a, y1a, x1b, y1b);
            line(x1b, y1b, x1c, y1c);
            line(x1c, y1c, x1a, y1a);
            break;
        case 5:
            exit(0);
        default:
            cout << "\n invalid choice";
            break;
        }
    } while (op != 5);
    getch();
    closegraph();
    return (0);
}