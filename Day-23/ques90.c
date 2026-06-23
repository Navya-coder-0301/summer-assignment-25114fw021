//program to find first repeated character
#include <stdio.h>
#include <string.h>
int main()
{
    int n, j, i = 0;
    char s[100];
    int count;
    
    printf("Enter a word: ");
    scanf("%s", s);
    n = strlen(s);

    // Find first repeated character
    while (s[i] != '\0')
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (s[i] == s[j]&&i!=j)
            {
                count++;
            }
        }
        
        if (count == 1)
        {
            printf("First repeated character: %c\n", s[i]);
            return 0;
        }
        i++;
    }
    
    printf("No repeated character found\n");
    return 0;
}