#include<stdio.h>

int main()

{
 int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,x=0,y=0;

 printf("Enter your khosher shongkha: ");
 scanf("%d", &x);

 if(x==2){
 y=y+1;
 }
 if(x>2){
 a=x/3;
 y=y+a;
 b=x%3;
 c=(a+b);
 }
 if((c)==2){
 y=y+1;
 }
 if((c)>2){
 d=c/3;
 y+=d;
 e=c%3;
 f=d+e;
 }
 if(f==2){
 y=y+1;
 }
 if(f>2){
 g=c/3;
 y+=g;
 h=c%3;
 i=d+e;
 if(i==2){
 y=y+1;
 }
 }
 printf("Total fau chocolate: %d",y);

 return 0;
}
