//to check palindrom string
#include <stdio.h>
#include <string.h>
int main ()
{
    int count=0;
    int pal =0;
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
     int k = 0;
     while (s[k]!='\0'||srev[k]!='\0')
     {
        if (s[k]!=srev[k])
        {
            pal =1;
            break;
        }
        else
        {
            k++;
        }
     }
     if (pal==0)
     {
        printf ("%s is palindrome",s);
     }
     else{
        printf ("%s is not palindrome",s);
     }

     return 0;
}