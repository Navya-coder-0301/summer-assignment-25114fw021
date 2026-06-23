//find max occuring character
#include <stdio.h>
#include <string.h>
int main()
{
    int n, j, i = 0 ,temp=0 ;
    char s[100];
    int count;
    char max ;
    
    printf("Enter a word: ");
    scanf("%s", s);
    n = strlen(s);
    max = s[0];
    // Find first repeated character
    while (s[i] != '\0')
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        
        if (temp < count)
        {
          temp = count;
          max = s[i];
        }
        i++;
    }
    
    printf("max frequency character = %c \n total occurence =%d",max,temp);
    return 0;
}