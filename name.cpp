#include<graphics.h>
#include<conio.h>
#include<direct.h>
#include<stdlib.h>

int main( ){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
   

   line(150,50,150,150);
   line(200,150,150,150);
   line(150,200,150,150);
    getch();
    closegraph();
}


