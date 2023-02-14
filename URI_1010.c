#include<stdio.h>

int main()

{
    int code1, unit1, code2, unit2;
    float price1, price2, value;

    scanf("%d %d %f", &code1, &unit1, &price1);
    scanf("%d %d %f", &code2, &unit2, &price2);

    value = (price1 * unit1) + (price2 * unit2);

    printf("VALOR A PAGAR: R$ %.2lf\n", value);

    return 0;
}
