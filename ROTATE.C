#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm,x1,y1,x2,y2,r,t;
 int ch;
 clrscr();
 initgraph(&gd,&gm,"..//BGI");
 printf("\nEnter x1,y1");
 scanf("%d%d",&x1,&y1);
 printf("\nEnter x2,y2");
 scanf("%d%d",&x2,&y2);
 printf("\nEnter angle");
 scanf("%d",&r);
 printf("\nEnter choice 1 for Anti Clockwise 2 for clockwise");
 scanf("%d",&ch);
 line(x1,y1,x2,y2);
 t=3.14*r/180;
 switch(ch)
 {
 case 1:
 x1=abs(x1*cos(t)-y1*sin(t));
 y1=abs(x1*sin(t)+y1*cos(t));
 x2=abs(x2*cos(t)-y2*sin(t));
 y2=abs(x2*sin(t)+y2*cos(t));
 setcolor(17);
 line(x1,y1,x2,y2);
 break;
 case 2:
 x1=abs(x1*cos(t)+y1*sin(t));
 y1=abs(-x1*sin(t)+y1*cos(t));
 x2=abs(x2*cos(t)+y2*sin(t));
 y2=abs(-x2*sin(t)+y2*cos(t));
 setcolor(17);
 line(x1,y1,x2,y2);
 break;
 default:
 printf("\n Wrong Chice");
 }
 getch();
 }