#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void LineBresenhams(int,int,int,int);
void main()
{
	int xa,xb,xb,yb;
	int gd=DETECT,gm;
	printf("Enter the 1st Co-ordinate : ");
	scanf("%d%d",&xa,&ya);
	printf("Enter the 2nd Co-ordinate : ");
	scanf("%d%d",&xb,&yb);
	initgraph(&gd,&gm,"");
	LineBresenhams(xa,ya,xb,yb);
	getch();
}
void LineBresenhams(int xa,int ya,int xb, int yb)
{
	int dx,dy,x,y,xEnd,p;
	dx=abs(xa-xb);
	dy=abs(ya-yb);
	p=2*(dy-dx);
		if(xa>xb)
			{
				x=xb;
				y=yb;
				xEnd=xa;
			}
		else
			{
				x=xa;
				y=ya;
				xEnd=xa;
			}
		putpixel(x,y,RED);
	do
		{
			x=x+1;
				if(p<0)
					p=p+2*dy;
				else
				{
					y=y+1;
					p=p+2*(dy-dx);
				}
			putpixel(x,y,RED)
		}while(x<xEnd)
		

