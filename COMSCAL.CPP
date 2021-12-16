#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
int xa, xb, xc, ya, yb, yc;
int x1a, x1b, x1c, y1a, y1b, y1c;
int x2a, x2b, x2c, y2a, y2b, y2c;
int x3a, x3b, x3c, y3a, y3b, y3c;
int x4a, x4b, x4c, y4a, y4b, y4c;
int tx, shx, shy, t, ch;
float ang, theta, sx, sy, sx1, sy1;
int main(void)
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "c://turboc3//bgi");
    cout << "composite scaling" << endl;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout << "original iamge" << endl;
    line(xa, ya, xb, yb);
    line(xb, yb, xc, yc);
    line(xc, yc, xa, ya);
    cout << "first operation ofscaling" << endl;
    cout << "enter the scaling factor" << endl;
    cin >> sx >> sy;
    x3a = xa * sx;
    y3a = ya * sy;
    x3b = xb * sx;
    y3b = yb * sy;
    x3c = xc * sx;
    y3c = yc * sy;
    cout << "after Scaling" << endl;
    line(x3a, y3a, x3b, y3b);
    line(x3b, y3b, x3c, y3c);
    line(x3c, y3c, x3a, y3a);
    delay(1);
    cout << "first operation ofscaling" << endl;
    cout << "enter the scaling factor" << endl;
    cin >> sx1 >> sy1;
    x4a = x3a * sx1;
    y4a = y3a * sy1;
    x4b = x3b * sx1;
    y4b = y3b * sy1;
    x4c = x3c * sx1;
    y4c = y3c * sy1;
    cout << "after Scaling" << endl;
    line(x4a, y4a, x4b, y4b);
    line(x4b, y4b, x4c, y4c);
    line(x4c, y4c, x4a, y4a);
    delay(1);
    getch();
    closegraph();
    return 0;
}