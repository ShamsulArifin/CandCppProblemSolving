#include<stdio.h>
int main()
{
 int row, star, space, n=6, m=n;

 for (row=1;row<=m;row++)
 {
  for(space=1;space<=n;space++){
  printf(" ");
 }
 for(star=1;star<=row;star--)
 {
  printf("*");
  printf(" ");
 }
 printf("\n");
 n--;
}

return 0;
}
