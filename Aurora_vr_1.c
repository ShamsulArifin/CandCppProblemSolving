#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()

{
 int i, vowel, consonant, digit, word, other;
 char string[9999], c;

 i=vowel=consonant=digit=word=other=0;

 system("color 05");
 printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tA[_]r0RA vr_1\n");
 printf("\nFor now i can only identify and count vowel, consonant, words and digits\n");
 printf("and other characters that my creator taught me.....\n\n");

 printf("User,please type a sentence: \n");
 scanf("%[^\n]",string);
 while((c=tolower(string[i++]))!='\0')

 {
  if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u')
      ++vowel;
  else
       if((c > 'a' && c < 'e')||(c > 'e' && c < 'i')||(c > 'i' && c < 'o')||(c > 'o' && c < 'u')||(c > 'u'))
               ++consonant;
       else
            if(c >= '0' && c <= '9')
               ++digit;
            else
                 if(c == ' ')
                    ++word;
                 else
                     ++other;
 }
 ++word;

 system("color 0c");
 printf("\nNumber of Vowels                 :%d\n",vowel);
 printf("Number of Consonant              :%d\n",consonant);
 printf("Number of Digits                 :%d\n",digit);
 printf("Number of Words                  :%d\n",word);
 printf("Number of Other charecters       :%d\n",other);

 getch();
}
