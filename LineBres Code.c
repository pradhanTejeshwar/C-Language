#include<stdio.h>
#include<conio.h>
#incude<graphics.>
void lineBres(int,int,int,int);
void main()
	{
		int x1,y1,x2,y2;
		int gd=DETECT,gm;

		printf("\nEnter the Starting Co-Ordinates : ");
		scanf("%d%d",&x1,&y1);
		printf("\nEnter the Ending Co-Ordinates : ");
		scanf("%d%d",&x2,&y2);

		initgraph(&gd,&gm,"Path/Directory");
		lineBres(x1,y1,x2,y2);
		getch();
		closegraph();
	}

	void lineBres(int x1 , int y1 , int x2 , int y2)
		{
			int Dx,Dy,x,y,xEnd;
			float p;

			Dx=abs(x2-x1);
			Dy=abs(y2-y1);
			p=2*Dy-Dx;

			If(x1>x2)
				{
					x=x2;
					y=y2;
					xEnd=x1;
				}
			Else
				{
					x=x1;
					y=y1;
					xEnd=x2;
				}
			putpixel(x,y,1);

			do
			{
				x=x+1;
					If(p<0)
						p=p+2*Dy;
					Else
						{
							y=y+1;
							p=p+2(Dy-Dx);
						}
				putpixel(x,y,1);
			}

		}