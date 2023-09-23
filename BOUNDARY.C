//This is program for Flood fill
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"..//BGI");
 rectangle(50,50,200,200);
 flood(55,55,5,0);

 getch();
}
flood(x,y,n_clr,o_clr)
{
 int c;
 c=getpixel(x,y);
 if(c==o_clr)
 {
  delay(10);
  putpixel(x,y,n_clr);
  flood(x+1,y,n_clr,o_clr);
  flood(x,y+1,n_clr,o_clr);
  flood(x-1,y,n_clr,o_clr);
  flood(x,y-1,n_clr,o_clr);

 }
 return 0;
}
