#include <stdio.h>

int main()

{
 float v, t, s;

 printf("please enter velosity and time: ");
 scanf("%f %f", &v,&t);

 s = 2*t*v;

 printf("distance when time = 2t is: %f\n", s);

 return 0;
}
