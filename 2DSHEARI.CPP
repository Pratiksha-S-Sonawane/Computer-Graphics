#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm,x1,y1,x2,y2,ch,shy,shx;
 clrscr();
 initgraph(&gd,&gm,"..//BGI");
 printf("\nEnter x1,y1");
 scanf("%d%d",&x1,&y1);
 printf("\nEnter x2,y2");
 scanf("%d%d",&x2,&y2);

 printf("Enter 1 : X-shear 2: Y- Shear");
 scanf("%d",&ch);
 rectangle(x1,y1,x2,y2);

 switch(ch)
 {
  case 1:
  printf("Enter X shear value");
  scanf("%d",&shx);
  x1=x1+shx*y1;
  y1=y1;
  x2=x2+shx*y2;
  y2=y2;
  setcolor(GREEN);
  rectangle(x1,y1,x2,y2);
  break;
  case 2:
  printf("Enter Y shear value");
  scanf("%d",&shy);
  x1=x1;
  y1=y1+shy*x1;
  x2=x2;
  y2=y2+shy*x2;
  setcolor(GREEN);
  rectangle(x1,y1,x2,y2);
  break;
  default:
  printf("Wrong Choice");
 }
 getch();
 }