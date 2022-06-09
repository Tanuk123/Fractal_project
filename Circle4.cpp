#include<graphics.h>
#include<conio.h>
#include<direct.h>
#include<stdlib.h>

int main( ){
    int gd = DETECT,gm;
    int midx,midy,i=1;
    initgraph(&gd,&gm,NULL);
    midx = getmaxx()/2;
    midy = getmaxy()/2;


while(!kbhit()){
   i=1;
    while(i<=150){
        setcolor(WHITE);

        circle(midx-i,midy-i,10+i);
        circle(midx+i,midy-i,10+i);
        circle(midx-i,midy+i,10+i);
        circle(midx+i,midy+i,10+i);

        delay(200);
        i=i+3;
    }

      i = 150;
     while(i>=1){
        int radius;
        // for(radius=0;radius<100;radius+5){
        //     setcolor(YELLOW);
        // circle(320,220,radius);}
        setcolor(YELLOW);
        circle(midx-i,midy-i,i-5);
        circle(midx+i,midy-i,i-5);
        circle(midx-i,midy+i,i-5);
        circle(midx+i,midy+i,i-5);

        delay(200);
        i=i+3;
    }
}
    getch();
    closegraph();
}


