#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
void bfill(int x, int y, int fill, int boundary)
{
    if (getpixel(x, y) != boundary && getpixel(x, y) != fill)
    {
        setcolor(fill);
        putpixel(x, y, fill);
        bfill(x + 1, y, fill, boundary);
        bfill(x - 1, y, fill, boundary);
        bfill(x, y + 1, fill, boundary);
        bfill(x, y - 1, fill, boundary);
    }
}
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    rectangle(10, 50, 50, 10);
    bfill(11, 12, RED, WHITE);
    getch();
    closegraph();
}
