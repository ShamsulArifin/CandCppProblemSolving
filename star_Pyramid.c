#include <stdio.h>

int main ()

{
    int a, b, c;

    printf("How many lines: ");
    scanf("%d", &c);

    for(a = 0; a <= c; a++)
    {
        for(b = 0; b <= a - 1; b++)
        {
            printf("*", a);
        }


        printf("\n");
        }
        return 0;
    }


