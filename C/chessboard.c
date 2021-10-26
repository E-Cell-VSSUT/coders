/*  C Program to perform Chess Board using graphics  */

#include<conio.h>
#include<graphics.h>
#include<math.h>
void ddaline(int x1, int y1, int x2, int y2) {
        int s, m, dx, dy;
        float xi, yi, x, y;
        dx = x2 - x1;
        dy = y2 - y1;
        if (abs(dx) > abs(dy))
                s = abs(dx); else
                s = abs(dy);
        xi = dx / (float) s;
        yi = dy / (float) s;
        x = x1;
        y = y1;
        putpixel(x1 + 0.5, y1 + 0.5, 15);
        for (m = 0; m < s; m++) {
                x += xi;
                y += yi;
                putpixel(x + 0.5, y + 0.5, 15);
        }
}
void fill(int x, int y) {
        int i, j;
        for (i = x; i < (x + 50); i++)
                ddaline(i, y, i, y + 50);
}
void main() {
        int i, j, c = 0;
        int gd = DETECT, gm = DETECT;
        initgraph(&gd, &gm, "");
        cleardevice();
        ddaline(100, 50, 100, 450);
        ddaline(100, 50, 500, 50);
        ddaline(500, 50, 500, 450);
        ddaline(100, 450, 500, 450);
        for (i = 100; i < 500; i += 50) {
                for (j = 50; j < 450; j += 50) {
                        if (c % 2 == 0)
                                        fill(i, j);
                        c++;
                }
                c++;
        }
        getch();
}

