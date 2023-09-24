#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
 float d;
 int i,gd=DETECT,gm,x,y,r;
 clrscr();

 initgraph(&gd,&gm,"..//BGI");

 printf("\nEnter radius: ");
 scanf("%d",&r);

 x=0;
 y=r;

 d=1.25-r;
 do
 {
  putpixel(200+x,200+y,WHITE);
  putpixel(200+y,200+x,BLUE);
  putpixel(200+x,200-y,RED);
  putpixel(200+y,200-x,GREEN);
  putpixel(200-x,200-y,YELLOW);
  putpixel(200-y,200-x,BROWN);
  putpixel(200-x,200+y,BLUE);
  putpixel(200-y,200+x,YELLOW);
  if(d<0)
  {
   x++;
   y=y;
   d=d+2*x+1;
  }
  else
  {
   x++;
   y--;
   d=d+1*(x-y)+1;
  }
  delay(100);

 }while(x<=y);
 getch();
}