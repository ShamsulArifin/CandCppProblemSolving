#include<stdio.h>

int main()

{
 float fahr, celsius, lower, upper, step;

 printf("Input lower temperature: ");
 scanf("%f", &lower);

 printf("\nInput upper temperature: ");
 scanf("%f", &upper);

 printf("\nInput step size: ");
 scanf("%f", &step);

 fahr = lower;
  printf("Farhenhite\tCelsius\n");
 while (fahr <= upper)
 {
  celsius =5 * (fahr-32)/9;
  printf("%f\t\t%f\n", fahr, celsius);
  fahr =fahr + step;
 }

 return 0;
 getch();
}
