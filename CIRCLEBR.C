#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
 float d;
 int r,x,y;
 int gd=DETECT,gm;
 clrscr();

 printf("\n Enter Radius: ");
 scanf("%d",&r);

 initgraph(&gd,&gm,"..//BGI");

 x=0;
 y=r;

 d=3-2*r;

 do
 {
  putpixel(200+x,200+y,WHITE);
  putpixel(200+y,200+x,BLUE);
  putpixel(200+y,200-x,GREEN);
  putpixel(200+x,200-y,YELLOW);
  putpixel(200-x,200-y,BLUE);
  putpixel(200-y,200-x,RED);
  putpixel(200-y,200+x,GREEN);
  putpixel(200-x,200+y,BROWN);

  if(d<=0)
  {
   d=d+4*x+6;

  }
  else
  {
   d=d+4*(x-y)+10;
   y=y-1;
  }
  x=x+1;
  delay(50);

 }while(x<=y);
 getch();
 closegraph();
}