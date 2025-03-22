#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
main()
{
	int gd=DETECT,gm,i;
	char *bm;
	initgraph(&gd,&gm."");
		setbkcolor(WHITE);
		setcolor(RED);
		moveto(2,200);
		lineto(30,200);
		circle(40,200,8);
		arc(40,200,0,180,10);
		moveto(50,200);
		lineto(90,200);
		circle(100,200,8);
		arc(100,200,0,180,10);
		moveto(110,200);
		lineto(140,200);
			lineeto(130,175);
			lineto(95,160);
		lineto(85,140);
		lineto(45,138);
		lineto(25,155);
		lineto(5,158);
		lineto(2,200);
		putpixel(40,200,RED);
		putpixel(100,200,RED);
		bm = malloc(imagesize(1,136,142,210));
		getimage(1,136,142,210);
		for(i=1;i<500;i++)
			{ putimage(i,136,bm,COPY_PUT);
				delay(50);
			}
		outtextxy(20,450,"press any key to continue...");
			getch();
		closegraph();
}
