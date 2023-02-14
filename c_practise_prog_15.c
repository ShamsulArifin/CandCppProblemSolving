#include <stdio.h>

int main()

{
 int n, sum;

 printf("input last number of the stream: ");
 scanf("%d", &n);

 sum = (n*(n+1))/2;

 printf("summation of the stream is: %d\n", sum);

 return 0;
}
