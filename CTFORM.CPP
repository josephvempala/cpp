#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>

int xa, xb, xc, ya, yb, yc;
int x1a, x1b, x1c, y1a, y1b, y1c;
int x2a, x2b, x2c, y2a, y2b, y2c;
int x3a, x3b, x3c, y3a, y3b, y3c;
int tx, shx, shy, t, ch;
float ang, theta, sx, sy;
int main(void)
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "c://turboc3//bgi");
    cout << "composite transformation" << endl;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout << "original image" << endl;
    line(xa, ya, xb, yb);
    line(xb, yb, xc, yc);
    line(xc, yc, xa, ya);
    cout << "translation factor" << endl;
    cin >> tx;
    cout << "after translation" << endl;
    x1a = xa + tx;
    x1b = xb + tx;
    x1c = xc + tx;
    y1a = ya;
    y1b = yb;
    y1c = yc;
    line(x1a, y1a, x1b, y1b);
    line(x1b, y1b, x1c, y1c);
    line(x1c, y1c, x1a, y1a);
    delay(1);
    cout << "Next operation is rotation" << endl;
    cout << "enter the rotation angle" << endl;
    cin >> ang;
    theta = ((ang * 3.141) / 180);
    x2a = x1a * cos(theta) - y1a * sin(theta);
    y2a = x1a * sin(theta) + y1a * cos(theta);
    x2b = x1b * cos(theta) - y1b * sin(theta);
    y2b = x1b * sin(theta) + y1b * cos(theta);
    x2c = x1c * cos(theta) - y1c * sin(theta);
    y2c = x1c * sin(theta) + y1c * cos(theta);
    cout << "after rotation";
    line(x2a, y2a, x2b, y2b);
    line(x2b, y2b, x2c, y2c);
    line(x2c, y2c, x2a, y2a);
    delay(1);
    cout << "next operation is scaling" << endl;
    cout << "enter the scaling factor" << endl;
    cin >> sx >> sy;
    x3a = x2a * sx;
    y3a = y2a * sy;
    x3b = x2b * sx;
    y3b = y2b * sy;
    x3c = x2c * sx;
    y3c = y2c * sy;
    cout << "after Scaling" << endl;
    line(x3a, y3a, x3b, y3b);
    line(x3b, y3b, x3c, y3c);
    line(x3c, y3c, x3a, y3a);
    delay(1);
    getch();
    closegraph();
    return 0;
}