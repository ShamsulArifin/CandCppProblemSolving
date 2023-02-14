#include<stdio.h>
#include<conio.h>

int main()

{
 int x,y,z,res;
 printf("\nhow many students in quiz: ");
 scanf("%d",&x);

 if ((x<0)&&(x>1000))
 {
  printf("\nERROR!");
 }

 printf("\nhow many student in programming: ");
 scanf("%d",&y);

 if ((y<0)&&(y>1000))
 {
  printf("\nERROR!");
 }

 printf("\nhow many students in both contest: ");
 scanf("%d",&z);

 if ((z>x)&&(z>y))
 {
  printf("\nERROR!");
 }

 res=((x-z)+(x-y));

 printf("\ntotal student is: %d",res);

 getch();
}
