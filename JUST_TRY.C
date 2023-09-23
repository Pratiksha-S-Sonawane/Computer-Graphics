#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..//BGI");
	ellipse(200,200,0,360,100,50);
	outtextxy(180,200,"Ellipse");
	getch();
}