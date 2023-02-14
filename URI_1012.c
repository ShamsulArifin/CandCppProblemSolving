#include<stdio.h>

int main()

{
    double a, b, c, tri, cir, trap, squ, rec;

    scanf("%lf %lf %lf", &a, &b, &c);

    tri = ( .5 ) * a * c;
    cir = 3.14159 * (c*c);
    trap = ( ( a + b ) / 2) * c;
    squ = b * b;
    rec = a * b;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", squ);
    printf("RETANGULO: %.3lf\n", rec);

    return 0;
}
