#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void main()

{
 int i,n=20;
 float x,y,sum;

 system("color 0c");
 printf("\n input a number(x): ");
 scanf("%f",&x);

 x=x*3.1412/180;

 y=1;

 sum=1;

 for(i=1;i<x+1;i++)
 {
  y=y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
  sum=sum+y;
 }
 printf("\n cos(x)=%.3f",sum);
 getch();
}
