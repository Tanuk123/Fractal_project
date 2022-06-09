#include <graphics.h>
#include <conio.h>
#include <direct.h>
#include <stdlib.h>

main()
{
    int gd = DETECT, gm;
    int midx, midy, i = 1;
    initgraph(&gd, &gm, NULL);
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    settextstyle(8, 0, 3);
    outtextxy(50, 15, "AAPKA DHYAN KIDHAR HAI ");
    delay(2000);

    settextstyle(8, 0, 4);

    outtextxy(30, 35, "HUMARA FRACTAL IDHAR HAI ");
    delay(4000);

    cleardevice();
    while (!kbhit())
    {
        static int c = 0;
        c++;
        i = 0;
        while (i <= 250)
        {
            setcolor(c);
            circle(midx - i, midy - i, 10 + i);
            circle(midx + i, midy - i, 10 + i);
            circle(midx - i, midy + i, 10 + i);
            circle(midx + i, midy + i, 10 + i);

            delay(150);
            i = i + 3;
        }
    }
    getch();
    closegraph();
}
