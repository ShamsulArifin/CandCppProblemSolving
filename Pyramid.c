#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
 int p,q,m,n;
 system("color 0c");
 printf("\n How many lines : ");
 scanf("%d",&n);

 printf("\n\n");

 for(p=1;p<=n;p++)
 {
  for (q=1;q<=(n-p);q++)
  printf("     ");
  m=p;
  for (q=1;q<=p;q++)
  printf("*",m++);
  printf("\n");
  m-=3;
  for (q=1;q<=p;q--)
  printf("*",m--);
  printf("\n");
 }

 getch();

}
