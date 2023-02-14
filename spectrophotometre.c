#include<stdio.h>
#include<math.h>
#define Rh 109678

int main()

{
  int nf,ni;
  float f;

  printf("\nInput Final Position of Electron: ");
  scanf("%d",&nf);

  printf("\nInput Initial Position of Electron: ");
  scanf("%d",&ni);

  f=(Rh*((1/(pow(nf,2)))-(1/(pow(ni,2)))));

 if (nf==1){
     printf("\nIt's Lyman Series");
 }
 if (nf==2){
     printf("\nIt's Balmer Series");
 }
 if (nf==3){
     printf("\nIt's Paschen Series");
 }
 if (nf==4){
     printf("\nIt's Brackett Series");
 }
 if (nf==5){
     printf("\nIt's Pfund Series");
 }
 else{
     printf("SYNTAX ERROR!!");
 }

 if (f >= 380 || f<=424){
     printf("\nIt's Violet");
 }
 if (f>424 || f<=450){
     printf("\nIt's Indigo");
 }
 if (f>450 || f<=500){
     printf("\nIt's Green");
 }
 if (f>500 || f<=575){
     printf("\nIt's Yellow");
 }
 if (f>=590 || f<=647){
     printf("\nIt's Orange");
 }
 if (f>647 || f<=780){
     printf("\nIt's Red");
 }
 else {
     printf("SYNTAX ERROR!!");
 }

 printf("\nFrequency is %f nano meter", f);

 return 0;
}

