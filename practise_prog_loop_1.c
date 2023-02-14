#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
 {
  int a;
  system("color 0c");
  printf("\n enter your age: ");
  scanf("%d",&a);

  if(a<18)
  printf("\n you can't vote! >:( ");

  if(a>18)
  printf("\n you can vote :) ");

  getch();
 }
