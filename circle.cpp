#include <graphics.h>
int main()
{
   int gd = DETECT, gm;
   int x = 320, y = 240, radius;
       
   initgraph(&gd, &gm, NULL);

   do{
   for ( radius = 0; radius <= 400 ; radius=radius + 7)
    {   
        
        setcolor(RED);
        circle(x, y, radius); 
        delay(70);
        
    }
    for (radius = 0; radius <= 400 ; radius=radius+7)
    {   
        
        setcolor(BLUE);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 0; radius <= 400 ; radius=radius+7)
    {   
        
        setcolor(YELLOW);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 0; radius <= 400 ; radius=radius+7)
    {   
        
        setcolor(WHITE);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 0; radius <= 400 ; radius=radius+7)
    {   
        
        setcolor(GREEN);
        circle(x, y, radius); 
        delay(70);
    }
   
   }
    while(1);

   getch();
   closegraph();
   return 0;
}