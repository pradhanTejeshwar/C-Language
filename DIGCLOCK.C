#include<dos.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
void main()
 {
  int gd=DETECT,gm;
  int midx,midy;
  long current_time;
  char timeStr[256];

  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  midx=getmaxx()/2;
  midy=getmaxy()/2;

  while(!kbhit())
   {
    cleardevice();
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
     rectangle(midx-250,midy-40,midx+250,midy+40);
     floodfill(midx,midy,WHITE);

    current_time=time(NULL);

    strcpy(timeStr,ctime(&current_time));
    setcolor(RED);
     settextjustify(CENTER_TEXT,CENTER_TEXT);
     settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);

    moveto(midx,midy);

    outtext(timeStr);
     delay(1000);

   }
   getch();
   closegraph();
 }