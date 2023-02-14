#include <stdio.h>

int main()

{
 int n;
 int i = 1;

 printf("input a number: ");
 scanf("%d", &n);

 while(i <= 999999999999999){
      printf("%d * %d = %d\n", n, i, n*i);
      i = i + 1;
 }

 return 0;
}
