#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <graphics.h>
void floodfill(int x, int y, int fillcolor, int oldcolor)
{
    if (getpixel(x, y) == oldcolor)
    {
        setcolor(fillcolor);
        putpixel(x, y, fillcolor);
        putpixel(x, y, fillcolor);
        floodfill(x + 1, y, fillcolor, oldcolor);
        floodfill(x, y + 1, fillcolor, oldcolor);
        floodfill(x - 1, y, fillcolor, oldcolor);
        floodfill(x, y - 1, fillcolor, oldcolor);
    }
}
int main()
{
    int gm, gd = DETECT, r, x, y;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    cout << "enter x and y";
    cin >> x >> y;
    circle(x, y, r);
    rectangle(50, 50, 100, 100);
    floodfill(55, 55, 40, 0);
    closegraph();
    return 0;
}