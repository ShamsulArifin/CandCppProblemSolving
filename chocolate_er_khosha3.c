#include<stdio.h>
#include<conio.h>

int main()

{
 int x,y;

 printf("Enter your chocolate er khoshar shongkha: ");
 scanf("%d", &x);

 if(x<=2)
 {
  printf("you get no extra chocolate.");
 }
 else
 {
  y=x/3;
  printf("you get %d chocolate.", y);
 }

 getch();

 return 0;
}
