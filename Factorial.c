#include<stdio.h>
#include<conio.h>
int fact(long long double n);
main()
{
 long long double num, f;

 printf("Enter a number: ");
 scanf("%lld",&num);
 f=fact(num);
 printf("The factorial of %lld is %lld", num, f);
 getch();
}
 int fact(long long double n)
{
 if (n==0)
 return 1;
 else
 return(n*fact(n-1));
}
