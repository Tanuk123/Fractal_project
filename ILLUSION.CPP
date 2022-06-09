
#include<stdio.h>
#include<conio.h>
#include<direct.h>
#include<graphics.h>
int main() {
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,NULL);
int j;
do{
for(j=5;j<=250;j=j+5){
// clrscr();
// system("clear");
setcolor(WHITE);
circle(300,200,j);
delay(100);
setcolor(BLACK);
circle(300,200,j);
}
}while(1);
getch();
closegraph();
}
