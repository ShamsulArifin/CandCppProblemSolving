#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 50
#define TRUE 1
#define FALSE 0

void main()

{
 int arry[MAX_ELEMENTS];
 int i, n, higher, lower, midentry, search_element, success;

 printf("\n%s%s\n%s%s\n%s%d\n","__DATE__ =",__DATE__,"__FILE__ =",__FILE__,"__LINE__ =",__LINE__,"__TIME__ =",__TIME__);

 system("color 0c");
 printf("How many elements in the arry ? ");
 scanf("%d",&n);

 system("color 0a");
 printf("\nEnter %d elements in ascending order (press ENTER after each elements 50):\n",n);
 for(i=0;i<n;i++)
    scanf("%d",&arry[i]);

 system("color 0d");
 printf("\n\nElements to be searched: ");
 scanf("%d",&search_element);

 lower = 0;
 higher = n-1;
 success = TRUE;

 while (lower <= higher)
    {
     midentry = (lower+higher)/2;

     if (search_element < arry[midentry])
         higher = midentry - 1;
     else
         if (search_element > arry[midentry])
             lower = midentry + 1;
     else
         if (search_element == arry[midentry])
         {
          system("color 0f");
          printf("\n\nElement %d found at index %d\n",search_element,midentry);
          success = FALSE;
          break;
         }

    }
  if (success)
             system("color 0c");
             printf("\n\nelement %d not found in the arry",search_element);
  getch();
}
