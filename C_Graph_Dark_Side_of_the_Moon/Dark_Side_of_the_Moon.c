//made by Baris Sarac//
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\tc\\The Dark Side of the Moon");
 line(0, 160, 250, 120);
 delay(200);
   line(300, 40, 200, 200);
   delay(200);
   line(300, 40, 400, 200);
   delay(200);
   line(200, 200, 400, 200);
   delay(200);
   setcolor(4);
    line(350, 120, 500, 150);
   delay(200);
   setcolor(6);
  line(350, 120, 500, 160);
   delay(200);
   setcolor(14);
    line(350, 120, 500, 170);
     delay(200);
        setcolor(2);
    line(350, 120, 500, 180);
      delay(200);
         setcolor(1);
    line(350, 120, 500, 190);
     delay(200);
        setcolor(5);
    line(350, 120, 500, 200);
   getch();
   closegraph();
   return 0;
}
