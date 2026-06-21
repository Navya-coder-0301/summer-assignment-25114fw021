//string length without library
#include <stdio.h>
#include <string.h>
int main ()
{
    int count=0;
    char s[100];
     printf ("enter string: ");
     scanf ("%s",s);
     while (s[count]!='\0')
     {
        count ++;
     }
     printf ("the length of string is %d",count);
     return 0;
}