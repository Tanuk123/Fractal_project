#include <graphics.h>


int main()
{
   int gd = DETECT, gm;
   int x = 320, y = 240, radius;
       
   initgraph(&gd, &gm, NULL);

   do{
   for ( radius = 0; radius <= 90 ; radius=radius + 4)
    {   
        
        setcolor(WHITE);
       setfillstyle(HATCH_FILL, RED);

        circle(x, y, radius); 
        delay(70);

        
    }
    for (radius = 100; radius <= 180 ; radius=radius+4)
    {   
        
        setcolor(1);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 200; radius <= 260 ; radius=radius+4)
    {   
        
        setcolor(2);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 300; radius <= 340 ; radius=radius+4)
    {   
        
        setcolor(3);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 400; radius <= 420 ; radius=radius+4)
    {   
        
        setcolor(4);
        circle(x, y, radius); 
        delay(70);
    }

    for ( radius = 0; radius <= 90 ; radius=radius + 4)
    {   
        
        setcolor(5);
        circle(x, y, radius); 
        delay(70);
        
    }
    for (radius = 100; radius <= 180 ; radius=radius+4)
    {   
        
        setcolor(6);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 200; radius <= 260 ; radius=radius+4)
    {   
        
        setcolor(7);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 300; radius <= 340 ; radius=radius+4)
    {   
        
        setcolor(8);
        circle(x, y, radius); 
        delay(70);
    }
    for (radius = 400; radius <= 420 ; radius=radius+4)
    {   
        
        setcolor(9);
        circle(x, y, radius); 
        delay(70);
    }
   
   }
    while(1);

   getch();
   closegraph();
   return 0;
}

