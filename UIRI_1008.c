#include<stdio.h>

int main()

{
    int NUMBER, A;
    float h, s;

    scanf("%d %d %f", &NUMBER, &A, &h);

    s =  A * h;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", s);

    return 0;
}
