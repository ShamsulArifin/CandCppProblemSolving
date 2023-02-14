#include<stdio.h>

int main()
{

int a,b,c,x;

    printf("input 1st number:");
    scanf("%d", & a);

    printf("input 2nd number:");
    scanf("%d", & b);

    printf("input 3rd number:");
    scanf("%d", & c);

    x=(a+b+c)/3;

    if(x >= 50)
    {
        printf("congo! \n");
        printf("your grade is: %d \n", x);

    }

    else
    {

    printf("you are fucked!");
    printf("your grade is: %d \n", x);

    }

return 0;
getch();
}
