#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()

{
    float x, y, w, t, v;

    printf("If No Input Than Type Zero (0)\n\n");

    printf("Enter Displacement: ");

    scanf("%f", &x);

    printf("Enter acceleration: ");

    scanf("%f", &y);
    printf("Angular Velocity: ");
    scanf("%f", &w);

    if(w == 0)
    {
        printf("\n");
        system("COLOR C");
        printf("Enter T = " );
        scanf("%f", &t);

        w = 2 * 3.1416 / t;
        printf("\nW = %f\n", w);
    }

    v = w* sqrt(y*y - x*x);

    printf("fuck you: %f", v);

    return 0;

}
