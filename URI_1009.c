#include<stdio.h>

int main()

{
    char NAME[30];
    float sa;
    double se, TOTAL;

    gets(NAME);
    scanf("%f %lf", &sa, &se);

    TOTAL = sa +  ( se * 15 ) / 100 ;

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;

}
