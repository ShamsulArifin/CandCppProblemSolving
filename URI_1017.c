#include<stdio.h>

int main()

{
    int a, b;
    float l;

    scanf("%d %d", &a, &b);

    l = (a*b)/12.0;

    printf("%.3lf\n", l);

    return 0;
}
