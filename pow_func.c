#include<stdio.h>
#include<math.h>
#include<conio.h>


int main()

{
 int a, x, result;

 printf("Input base: ");
 scanf("%d",&a);

 printf("Input power: ");
 scanf("%d",&x);

 result=(pow((a),x));


 printf("Result is %d", result);

 getch();

 return 0;
}
