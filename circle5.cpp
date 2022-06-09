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
    while(i<=250){
       static int c=0;
       if(c==14){
           for(c=14;c>=0;c--){
               setcolor(c);
           }
       }
        else{
            setcolor(++c); }
        circle(midx-i,midy-i,10+i);
        circle(midx+i,midy-i,10+i);
        circle(midx-i,midy+i,10+i);
        circle(midx+i,midy+i,10+i);

        delay(250);
        i=i+3;
    }
    //      i=1;
    //    while(i<=250){
    //     setcolor(YELLOW);
    //     circle(midx-i,midy-i,10+i);
    //     circle(midx+i,midy-i,10+i);
    //     circle(midx-i,midy+i,10+i);
    //     circle(midx+i,midy+i,10+i);

    //     delay(300);
    //     i=i+3;
    // }
}
    getch();
    closegraph();
}


