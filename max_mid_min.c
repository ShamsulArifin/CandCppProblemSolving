#include<stdio.h>
#include<conio.h>

int main()

{
 int a, b, c;

 printf("Input three numbers:\n");
 scanf("%d %d %d", &a, &b, &c);

 if(a>b && b>c)
 {
   printf("\n%d is maximum %d is medium %d is minimum", a, b, c);
 }

 if(c>b && b>a)
 {
   printf("\n%d is maximum %d is medium %d is minimum", c, b, a);
 }

 if(c>a && a>b)
 {
   printf("\n%d is maximum %d is medium %d is minimum", c, a, b);
 }

 if(b>a && a>c)
 {
   printf("\n%d is maximum %d is medium %d is minimum", b, a, c);
 }

 if(a>c && c>b)
 {
   printf("\n%d is maximum %d is medium %d is minimum", a, c, b);
 }

 if(b>c && c>a)
 {
   printf("\n%d is maximum %d is medium %d is minimum", b, c, a);
 }

 if(a==b && (b<c || a<c))
 {
   printf("\n%d and %d are equal %d is maximum", a, b, c);
 }

 if(a==b && (a>c || b>c))
 {
   printf("\n%d and %d are equal %d is minimum", a, b, c);
 }

 if(b==c && (b<a || c<a))
 {
   printf("\n%d and %d are equal %d is maximum", b, c, a);
 }

 if(b==c && (b>a || c>a))
 {
   printf("\n%d and %d are equal %d is minimum", b, c, a);
 }

 if(c==a && (c<b || a<b))
 {
   printf("\n%d and %d are equal %d is maximum", c, a, b);
 }

 if(c==a && (c>b || a>b))
 {
     printf("\n%d and %d are equal %d is minimum", c, a, b);
 }

 if(a==b && b==c && c==a)
 {
   printf("\n%d, %d and %d are equal", a, b, c);
 }



 return 0;
 getch();

}
