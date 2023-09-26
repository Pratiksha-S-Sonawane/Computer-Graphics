#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
 float x,y,x1,y1,x2,y2,dx,dy,steps,xinc,yinc;
 int i ,gd,gm;
 clrscr();
 printf("\n Enter Value of x1 ");
 scanf("%f",&x1);
 printf("\n Enter value of y1 ");
 scanf("%f",&y1);
 printf("\n Enter value of x2 ");
 scanf("%f",&x2);
 printf("\n Enter value of y2 ");
 scanf("%f",&y2);
 initgraph(&gd,&gm,"..//BGI");
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 if(dx>=dy)
 {
  steps=dx;
 }
 else
 {
  steps=dy;
 }

 xinc=dx/steps;
 yinc=dy/steps;

 x=x1+0.5;
 y=y1+0.5;
 i=1;
 while(i<=steps)
 {
 putpixel(x,y,WHITE);
  x=x+xinc;
  y=y+yinc;
  i=i+1;
  delay(100);
 }
 getch();
}