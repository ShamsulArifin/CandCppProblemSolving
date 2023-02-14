#include <stdio.h>

int main()

{
 double a1, b1, c1, a2, b2, c2, x, y;

 printf("input a1, b1 & c1: ");
 scanf("%lf %lf %lf", &a1, &b1, &c1);

 printf("input a2, b2 & c2: ");
 scanf("%lf %lf %lf", &a2, &b2, &c2);

 x = (((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1)));
 y = (((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1)));

 printf("x = %0.2lf\n", x);
 printf("y = %0.2lf\n", y);

 return 0;
}
