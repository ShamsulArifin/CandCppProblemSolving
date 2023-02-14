#include<stdio.h>

int main()

{
 double x=100.1,y;
 int *p;

 p=(int *) &x;

 y=*p;

 printf("the (incorrect) value of x is: %f", y);

 return 0;
}
