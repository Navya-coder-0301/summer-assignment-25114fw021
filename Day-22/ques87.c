//to count character frequency
#include <stdio.h>
#include <string.h>
int main ()
{
    int count=0;
    int k=0;
    char s[100];
    char c;
    printf ("enter character to search:");
     scanf ("%c",&c);
     printf ("enter string: ");
     scanf ("%s",s);
     
     while (s[k]!='\0')
     {
        if (s[k]==c)
        {
            count ++;
            k++;
        }
        else{
            k++;
        }
     }
     printf ("the frequency of %c is %d",c ,count);
     return 0;
    }