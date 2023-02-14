#include<stdio.h>
#include<conio.h>

int main()

{
 int x, y;

 printf("Input value of X and y: ");
 scanf("%d %d", &x, &y);

 if(x>0 && y>0){
   printf("The point (%d,%d) is in region 1.", x, y);
 }
 if(x<0 && y>0){
   printf("The point (%d,%d) is in region 2.", x, y);
 }
 if(x<0 && y<0){
   printf("The point (%d,%d) is in region 3.", x, y);
 }
 if(x>0 && y<0){
   printf("The point (%d,%d) is in region 4.", x, y);
 }

 return 0;
 getch();
}
