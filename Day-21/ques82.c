//to reverse a string
#include <stdio.h>
#include <string.h>
int main ()
{
    int count=0;
    char s[100],srev[100];
     printf ("enter string: ");
     scanf ("%s",s);
     while (s[count]!='\0')
     {
        count ++;
     }
     int i = 0;
     int j = count - 1;
     while (i < count)
     {
        srev[i] = s[j];
        i++;
        j--;
     }
     srev[count] = '\0';
     printf ("reverse of %s is %s", s, srev);

     return 0;
}