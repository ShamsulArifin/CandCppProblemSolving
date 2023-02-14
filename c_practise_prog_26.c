#include<stdio.h>

int main()

{
 int x, y;

 printf("Input a number: ");
 scanf("%d", &y);
 for(x=1;x<=y;x++)
    printf("%d\n", x);

 return 0;
}
