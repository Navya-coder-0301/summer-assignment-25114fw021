//to count vowel and consonant in string
#include <stdio.h>
#include <string.h>
int main ()
{
    int vowel=0; int consonant=0,count=0;
    char s[100];
     printf ("enter string: ");
     scanf ("%s",s);
     while (s[count]!='\0')
     {
        if (s[count]=='a'||s[count]=='e'||s[count]=='i'||s[count]=='o'||s[count]=='u'||s[count]=='A'||s[count]=='E'||s[count]=='I'||s[count]=='O'||s[count]=='U')
        {
            vowel++ ;
            count++ ;
        }
        else
        {
            consonant++ ;
            count++ ;
        }
       
     }
      printf("vowels = %d \n consonants = %d",vowel,consonant);
     return 0;
}